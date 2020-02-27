/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
package org.apache.drill.exec.rpc;

import java.util.concurrent.Semaphore;
import java.util.concurrent.atomic.AtomicBoolean;
import java.util.concurrent.locks.ReentrantLock;

public class DynamicSemaphore {

    private static int INITIAL_STATIC_CREDIT = 3;
    private Semaphore semaphore = new Semaphore(INITIAL_STATIC_CREDIT);
    private AtomicBoolean changed = new AtomicBoolean(false);
    private ReentrantLock lock = new ReentrantLock();
    private int firstReceivedCredit = -1;

    public DynamicSemaphore() {

    }

    public void acquire() throws InterruptedException {
        semaphore.acquire();
    }

    public void release() {
        semaphore.release();
    }

    /**
     * received an advice credit to transfer from the
     * initial static value
     *
     * @param suggestedSemaphoreVal
     */
    public void tryToIncreaseCredit(int suggestedSemaphoreVal) {
        if (suggestedSemaphoreVal < INITIAL_STATIC_CREDIT) {
            return;
        }
        if (changed.get()) {
            return;
        }
        try {
            lock.lock();
            if (suggestedSemaphoreVal > firstReceivedCredit) {
                firstReceivedCredit = suggestedSemaphoreVal;
            } else {
                return;
            }
            int increasedSemaphoreNumber = suggestedSemaphoreVal - INITIAL_STATIC_CREDIT;
            //meaning increase the semaphore
            semaphore.release(increasedSemaphoreNumber);
            changed.compareAndSet(false, true);
        } finally {
            lock.unlock();
        }
    }
}
