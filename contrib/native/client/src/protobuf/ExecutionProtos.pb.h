// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ExecutionProtos.proto

#ifndef PROTOBUF_INCLUDED_ExecutionProtos_2eproto
#define PROTOBUF_INCLUDED_ExecutionProtos_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "Coordination.pb.h"
#include "UserBitShared.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_ExecutionProtos_2eproto 

namespace protobuf_ExecutionProtos_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_ExecutionProtos_2eproto
namespace exec {
namespace bit {
class FragmentHandle;
class FragmentHandleDefaultTypeInternal;
extern FragmentHandleDefaultTypeInternal _FragmentHandle_default_instance_;
class ServerPreparedStatementState;
class ServerPreparedStatementStateDefaultTypeInternal;
extern ServerPreparedStatementStateDefaultTypeInternal _ServerPreparedStatementState_default_instance_;
}  // namespace bit
}  // namespace exec
namespace google {
namespace protobuf {
template<> ::exec::bit::FragmentHandle* Arena::CreateMaybeMessage<::exec::bit::FragmentHandle>(Arena*);
template<> ::exec::bit::ServerPreparedStatementState* Arena::CreateMaybeMessage<::exec::bit::ServerPreparedStatementState>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace exec {
namespace bit {

// ===================================================================

class FragmentHandle : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:exec.bit.FragmentHandle) */ {
 public:
  FragmentHandle();
  virtual ~FragmentHandle();

  FragmentHandle(const FragmentHandle& from);

  inline FragmentHandle& operator=(const FragmentHandle& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  FragmentHandle(FragmentHandle&& from) noexcept
    : FragmentHandle() {
    *this = ::std::move(from);
  }

  inline FragmentHandle& operator=(FragmentHandle&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const FragmentHandle& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const FragmentHandle* internal_default_instance() {
    return reinterpret_cast<const FragmentHandle*>(
               &_FragmentHandle_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(FragmentHandle* other);
  friend void swap(FragmentHandle& a, FragmentHandle& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline FragmentHandle* New() const final {
    return CreateMaybeMessage<FragmentHandle>(NULL);
  }

  FragmentHandle* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<FragmentHandle>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const FragmentHandle& from);
  void MergeFrom(const FragmentHandle& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(FragmentHandle* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .exec.shared.QueryId query_id = 1;
  bool has_query_id() const;
  void clear_query_id();
  static const int kQueryIdFieldNumber = 1;
  private:
  const ::exec::shared::QueryId& _internal_query_id() const;
  public:
  const ::exec::shared::QueryId& query_id() const;
  ::exec::shared::QueryId* release_query_id();
  ::exec::shared::QueryId* mutable_query_id();
  void set_allocated_query_id(::exec::shared::QueryId* query_id);

  // optional .exec.shared.QueryId parent_query_id = 4;
  bool has_parent_query_id() const;
  void clear_parent_query_id();
  static const int kParentQueryIdFieldNumber = 4;
  private:
  const ::exec::shared::QueryId& _internal_parent_query_id() const;
  public:
  const ::exec::shared::QueryId& parent_query_id() const;
  ::exec::shared::QueryId* release_parent_query_id();
  ::exec::shared::QueryId* mutable_parent_query_id();
  void set_allocated_parent_query_id(::exec::shared::QueryId* parent_query_id);

  // optional int32 major_fragment_id = 2;
  bool has_major_fragment_id() const;
  void clear_major_fragment_id();
  static const int kMajorFragmentIdFieldNumber = 2;
  ::google::protobuf::int32 major_fragment_id() const;
  void set_major_fragment_id(::google::protobuf::int32 value);

  // optional int32 minor_fragment_id = 3;
  bool has_minor_fragment_id() const;
  void clear_minor_fragment_id();
  static const int kMinorFragmentIdFieldNumber = 3;
  ::google::protobuf::int32 minor_fragment_id() const;
  void set_minor_fragment_id(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:exec.bit.FragmentHandle)
 private:
  void set_has_query_id();
  void clear_has_query_id();
  void set_has_major_fragment_id();
  void clear_has_major_fragment_id();
  void set_has_minor_fragment_id();
  void clear_has_minor_fragment_id();
  void set_has_parent_query_id();
  void clear_has_parent_query_id();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::exec::shared::QueryId* query_id_;
  ::exec::shared::QueryId* parent_query_id_;
  ::google::protobuf::int32 major_fragment_id_;
  ::google::protobuf::int32 minor_fragment_id_;
  friend struct ::protobuf_ExecutionProtos_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class ServerPreparedStatementState : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:exec.bit.ServerPreparedStatementState) */ {
 public:
  ServerPreparedStatementState();
  virtual ~ServerPreparedStatementState();

  ServerPreparedStatementState(const ServerPreparedStatementState& from);

  inline ServerPreparedStatementState& operator=(const ServerPreparedStatementState& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ServerPreparedStatementState(ServerPreparedStatementState&& from) noexcept
    : ServerPreparedStatementState() {
    *this = ::std::move(from);
  }

  inline ServerPreparedStatementState& operator=(ServerPreparedStatementState&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ServerPreparedStatementState& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ServerPreparedStatementState* internal_default_instance() {
    return reinterpret_cast<const ServerPreparedStatementState*>(
               &_ServerPreparedStatementState_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(ServerPreparedStatementState* other);
  friend void swap(ServerPreparedStatementState& a, ServerPreparedStatementState& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ServerPreparedStatementState* New() const final {
    return CreateMaybeMessage<ServerPreparedStatementState>(NULL);
  }

  ServerPreparedStatementState* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<ServerPreparedStatementState>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const ServerPreparedStatementState& from);
  void MergeFrom(const ServerPreparedStatementState& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ServerPreparedStatementState* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string sql_query = 1;
  bool has_sql_query() const;
  void clear_sql_query();
  static const int kSqlQueryFieldNumber = 1;
  const ::std::string& sql_query() const;
  void set_sql_query(const ::std::string& value);
  #if LANG_CXX11
  void set_sql_query(::std::string&& value);
  #endif
  void set_sql_query(const char* value);
  void set_sql_query(const char* value, size_t size);
  ::std::string* mutable_sql_query();
  ::std::string* release_sql_query();
  void set_allocated_sql_query(::std::string* sql_query);

  // @@protoc_insertion_point(class_scope:exec.bit.ServerPreparedStatementState)
 private:
  void set_has_sql_query();
  void clear_has_sql_query();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr sql_query_;
  friend struct ::protobuf_ExecutionProtos_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// FragmentHandle

// optional .exec.shared.QueryId query_id = 1;
inline bool FragmentHandle::has_query_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void FragmentHandle::set_has_query_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void FragmentHandle::clear_has_query_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline const ::exec::shared::QueryId& FragmentHandle::_internal_query_id() const {
  return *query_id_;
}
inline const ::exec::shared::QueryId& FragmentHandle::query_id() const {
  const ::exec::shared::QueryId* p = query_id_;
  // @@protoc_insertion_point(field_get:exec.bit.FragmentHandle.query_id)
  return p != NULL ? *p : *reinterpret_cast<const ::exec::shared::QueryId*>(
      &::exec::shared::_QueryId_default_instance_);
}
inline ::exec::shared::QueryId* FragmentHandle::release_query_id() {
  // @@protoc_insertion_point(field_release:exec.bit.FragmentHandle.query_id)
  clear_has_query_id();
  ::exec::shared::QueryId* temp = query_id_;
  query_id_ = NULL;
  return temp;
}
inline ::exec::shared::QueryId* FragmentHandle::mutable_query_id() {
  set_has_query_id();
  if (query_id_ == NULL) {
    auto* p = CreateMaybeMessage<::exec::shared::QueryId>(GetArenaNoVirtual());
    query_id_ = p;
  }
  // @@protoc_insertion_point(field_mutable:exec.bit.FragmentHandle.query_id)
  return query_id_;
}
inline void FragmentHandle::set_allocated_query_id(::exec::shared::QueryId* query_id) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(query_id_);
  }
  if (query_id) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      query_id = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, query_id, submessage_arena);
    }
    set_has_query_id();
  } else {
    clear_has_query_id();
  }
  query_id_ = query_id;
  // @@protoc_insertion_point(field_set_allocated:exec.bit.FragmentHandle.query_id)
}

// optional int32 major_fragment_id = 2;
inline bool FragmentHandle::has_major_fragment_id() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void FragmentHandle::set_has_major_fragment_id() {
  _has_bits_[0] |= 0x00000004u;
}
inline void FragmentHandle::clear_has_major_fragment_id() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void FragmentHandle::clear_major_fragment_id() {
  major_fragment_id_ = 0;
  clear_has_major_fragment_id();
}
inline ::google::protobuf::int32 FragmentHandle::major_fragment_id() const {
  // @@protoc_insertion_point(field_get:exec.bit.FragmentHandle.major_fragment_id)
  return major_fragment_id_;
}
inline void FragmentHandle::set_major_fragment_id(::google::protobuf::int32 value) {
  set_has_major_fragment_id();
  major_fragment_id_ = value;
  // @@protoc_insertion_point(field_set:exec.bit.FragmentHandle.major_fragment_id)
}

// optional int32 minor_fragment_id = 3;
inline bool FragmentHandle::has_minor_fragment_id() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void FragmentHandle::set_has_minor_fragment_id() {
  _has_bits_[0] |= 0x00000008u;
}
inline void FragmentHandle::clear_has_minor_fragment_id() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void FragmentHandle::clear_minor_fragment_id() {
  minor_fragment_id_ = 0;
  clear_has_minor_fragment_id();
}
inline ::google::protobuf::int32 FragmentHandle::minor_fragment_id() const {
  // @@protoc_insertion_point(field_get:exec.bit.FragmentHandle.minor_fragment_id)
  return minor_fragment_id_;
}
inline void FragmentHandle::set_minor_fragment_id(::google::protobuf::int32 value) {
  set_has_minor_fragment_id();
  minor_fragment_id_ = value;
  // @@protoc_insertion_point(field_set:exec.bit.FragmentHandle.minor_fragment_id)
}

// optional .exec.shared.QueryId parent_query_id = 4;
inline bool FragmentHandle::has_parent_query_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void FragmentHandle::set_has_parent_query_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void FragmentHandle::clear_has_parent_query_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline const ::exec::shared::QueryId& FragmentHandle::_internal_parent_query_id() const {
  return *parent_query_id_;
}
inline const ::exec::shared::QueryId& FragmentHandle::parent_query_id() const {
  const ::exec::shared::QueryId* p = parent_query_id_;
  // @@protoc_insertion_point(field_get:exec.bit.FragmentHandle.parent_query_id)
  return p != NULL ? *p : *reinterpret_cast<const ::exec::shared::QueryId*>(
      &::exec::shared::_QueryId_default_instance_);
}
inline ::exec::shared::QueryId* FragmentHandle::release_parent_query_id() {
  // @@protoc_insertion_point(field_release:exec.bit.FragmentHandle.parent_query_id)
  clear_has_parent_query_id();
  ::exec::shared::QueryId* temp = parent_query_id_;
  parent_query_id_ = NULL;
  return temp;
}
inline ::exec::shared::QueryId* FragmentHandle::mutable_parent_query_id() {
  set_has_parent_query_id();
  if (parent_query_id_ == NULL) {
    auto* p = CreateMaybeMessage<::exec::shared::QueryId>(GetArenaNoVirtual());
    parent_query_id_ = p;
  }
  // @@protoc_insertion_point(field_mutable:exec.bit.FragmentHandle.parent_query_id)
  return parent_query_id_;
}
inline void FragmentHandle::set_allocated_parent_query_id(::exec::shared::QueryId* parent_query_id) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(parent_query_id_);
  }
  if (parent_query_id) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      parent_query_id = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, parent_query_id, submessage_arena);
    }
    set_has_parent_query_id();
  } else {
    clear_has_parent_query_id();
  }
  parent_query_id_ = parent_query_id;
  // @@protoc_insertion_point(field_set_allocated:exec.bit.FragmentHandle.parent_query_id)
}

// -------------------------------------------------------------------

// ServerPreparedStatementState

// optional string sql_query = 1;
inline bool ServerPreparedStatementState::has_sql_query() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ServerPreparedStatementState::set_has_sql_query() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ServerPreparedStatementState::clear_has_sql_query() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ServerPreparedStatementState::clear_sql_query() {
  sql_query_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_sql_query();
}
inline const ::std::string& ServerPreparedStatementState::sql_query() const {
  // @@protoc_insertion_point(field_get:exec.bit.ServerPreparedStatementState.sql_query)
  return sql_query_.GetNoArena();
}
inline void ServerPreparedStatementState::set_sql_query(const ::std::string& value) {
  set_has_sql_query();
  sql_query_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:exec.bit.ServerPreparedStatementState.sql_query)
}
#if LANG_CXX11
inline void ServerPreparedStatementState::set_sql_query(::std::string&& value) {
  set_has_sql_query();
  sql_query_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:exec.bit.ServerPreparedStatementState.sql_query)
}
#endif
inline void ServerPreparedStatementState::set_sql_query(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_sql_query();
  sql_query_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:exec.bit.ServerPreparedStatementState.sql_query)
}
inline void ServerPreparedStatementState::set_sql_query(const char* value, size_t size) {
  set_has_sql_query();
  sql_query_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:exec.bit.ServerPreparedStatementState.sql_query)
}
inline ::std::string* ServerPreparedStatementState::mutable_sql_query() {
  set_has_sql_query();
  // @@protoc_insertion_point(field_mutable:exec.bit.ServerPreparedStatementState.sql_query)
  return sql_query_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ServerPreparedStatementState::release_sql_query() {
  // @@protoc_insertion_point(field_release:exec.bit.ServerPreparedStatementState.sql_query)
  if (!has_sql_query()) {
    return NULL;
  }
  clear_has_sql_query();
  return sql_query_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ServerPreparedStatementState::set_allocated_sql_query(::std::string* sql_query) {
  if (sql_query != NULL) {
    set_has_sql_query();
  } else {
    clear_has_sql_query();
  }
  sql_query_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), sql_query);
  // @@protoc_insertion_point(field_set_allocated:exec.bit.ServerPreparedStatementState.sql_query)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace bit
}  // namespace exec

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_ExecutionProtos_2eproto
