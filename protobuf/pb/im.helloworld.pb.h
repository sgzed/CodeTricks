// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: im.helloworld.proto

#ifndef PROTOBUF_im_2ehelloworld_2eproto__INCLUDED
#define PROTOBUF_im_2ehelloworld_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace im {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_im_2ehelloworld_2eproto();
void protobuf_AssignDesc_im_2ehelloworld_2eproto();
void protobuf_ShutdownFile_im_2ehelloworld_2eproto();

class helloworld;

// ===================================================================

class helloworld : public ::google::protobuf::Message {
 public:
  helloworld();
  virtual ~helloworld();

  helloworld(const helloworld& from);

  inline helloworld& operator=(const helloworld& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const helloworld& default_instance();

  void Swap(helloworld* other);

  // implements Message ----------------------------------------------

  helloworld* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const helloworld& from);
  void MergeFrom(const helloworld& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string usrname = 1;
  inline bool has_usrname() const;
  inline void clear_usrname();
  static const int kUsrnameFieldNumber = 1;
  inline const ::std::string& usrname() const;
  inline void set_usrname(const ::std::string& value);
  inline void set_usrname(const char* value);
  inline void set_usrname(const char* value, size_t size);
  inline ::std::string* mutable_usrname();
  inline ::std::string* release_usrname();
  inline void set_allocated_usrname(::std::string* usrname);

  // required string passwd = 2;
  inline bool has_passwd() const;
  inline void clear_passwd();
  static const int kPasswdFieldNumber = 2;
  inline const ::std::string& passwd() const;
  inline void set_passwd(const ::std::string& value);
  inline void set_passwd(const char* value);
  inline void set_passwd(const char* value, size_t size);
  inline ::std::string* mutable_passwd();
  inline ::std::string* release_passwd();
  inline void set_allocated_passwd(::std::string* passwd);

  // optional string email = 3;
  inline bool has_email() const;
  inline void clear_email();
  static const int kEmailFieldNumber = 3;
  inline const ::std::string& email() const;
  inline void set_email(const ::std::string& value);
  inline void set_email(const char* value);
  inline void set_email(const char* value, size_t size);
  inline ::std::string* mutable_email();
  inline ::std::string* release_email();
  inline void set_allocated_email(::std::string* email);

  // @@protoc_insertion_point(class_scope:im.helloworld)
 private:
  inline void set_has_usrname();
  inline void clear_has_usrname();
  inline void set_has_passwd();
  inline void clear_has_passwd();
  inline void set_has_email();
  inline void clear_has_email();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* usrname_;
  ::std::string* passwd_;
  ::std::string* email_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_im_2ehelloworld_2eproto();
  friend void protobuf_AssignDesc_im_2ehelloworld_2eproto();
  friend void protobuf_ShutdownFile_im_2ehelloworld_2eproto();

  void InitAsDefaultInstance();
  static helloworld* default_instance_;
};
// ===================================================================


// ===================================================================

// helloworld

// required string usrname = 1;
inline bool helloworld::has_usrname() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void helloworld::set_has_usrname() {
  _has_bits_[0] |= 0x00000001u;
}
inline void helloworld::clear_has_usrname() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void helloworld::clear_usrname() {
  if (usrname_ != &::google::protobuf::internal::kEmptyString) {
    usrname_->clear();
  }
  clear_has_usrname();
}
inline const ::std::string& helloworld::usrname() const {
  return *usrname_;
}
inline void helloworld::set_usrname(const ::std::string& value) {
  set_has_usrname();
  if (usrname_ == &::google::protobuf::internal::kEmptyString) {
    usrname_ = new ::std::string;
  }
  usrname_->assign(value);
}
inline void helloworld::set_usrname(const char* value) {
  set_has_usrname();
  if (usrname_ == &::google::protobuf::internal::kEmptyString) {
    usrname_ = new ::std::string;
  }
  usrname_->assign(value);
}
inline void helloworld::set_usrname(const char* value, size_t size) {
  set_has_usrname();
  if (usrname_ == &::google::protobuf::internal::kEmptyString) {
    usrname_ = new ::std::string;
  }
  usrname_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* helloworld::mutable_usrname() {
  set_has_usrname();
  if (usrname_ == &::google::protobuf::internal::kEmptyString) {
    usrname_ = new ::std::string;
  }
  return usrname_;
}
inline ::std::string* helloworld::release_usrname() {
  clear_has_usrname();
  if (usrname_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = usrname_;
    usrname_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void helloworld::set_allocated_usrname(::std::string* usrname) {
  if (usrname_ != &::google::protobuf::internal::kEmptyString) {
    delete usrname_;
  }
  if (usrname) {
    set_has_usrname();
    usrname_ = usrname;
  } else {
    clear_has_usrname();
    usrname_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required string passwd = 2;
inline bool helloworld::has_passwd() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void helloworld::set_has_passwd() {
  _has_bits_[0] |= 0x00000002u;
}
inline void helloworld::clear_has_passwd() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void helloworld::clear_passwd() {
  if (passwd_ != &::google::protobuf::internal::kEmptyString) {
    passwd_->clear();
  }
  clear_has_passwd();
}
inline const ::std::string& helloworld::passwd() const {
  return *passwd_;
}
inline void helloworld::set_passwd(const ::std::string& value) {
  set_has_passwd();
  if (passwd_ == &::google::protobuf::internal::kEmptyString) {
    passwd_ = new ::std::string;
  }
  passwd_->assign(value);
}
inline void helloworld::set_passwd(const char* value) {
  set_has_passwd();
  if (passwd_ == &::google::protobuf::internal::kEmptyString) {
    passwd_ = new ::std::string;
  }
  passwd_->assign(value);
}
inline void helloworld::set_passwd(const char* value, size_t size) {
  set_has_passwd();
  if (passwd_ == &::google::protobuf::internal::kEmptyString) {
    passwd_ = new ::std::string;
  }
  passwd_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* helloworld::mutable_passwd() {
  set_has_passwd();
  if (passwd_ == &::google::protobuf::internal::kEmptyString) {
    passwd_ = new ::std::string;
  }
  return passwd_;
}
inline ::std::string* helloworld::release_passwd() {
  clear_has_passwd();
  if (passwd_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = passwd_;
    passwd_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void helloworld::set_allocated_passwd(::std::string* passwd) {
  if (passwd_ != &::google::protobuf::internal::kEmptyString) {
    delete passwd_;
  }
  if (passwd) {
    set_has_passwd();
    passwd_ = passwd;
  } else {
    clear_has_passwd();
    passwd_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional string email = 3;
inline bool helloworld::has_email() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void helloworld::set_has_email() {
  _has_bits_[0] |= 0x00000004u;
}
inline void helloworld::clear_has_email() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void helloworld::clear_email() {
  if (email_ != &::google::protobuf::internal::kEmptyString) {
    email_->clear();
  }
  clear_has_email();
}
inline const ::std::string& helloworld::email() const {
  return *email_;
}
inline void helloworld::set_email(const ::std::string& value) {
  set_has_email();
  if (email_ == &::google::protobuf::internal::kEmptyString) {
    email_ = new ::std::string;
  }
  email_->assign(value);
}
inline void helloworld::set_email(const char* value) {
  set_has_email();
  if (email_ == &::google::protobuf::internal::kEmptyString) {
    email_ = new ::std::string;
  }
  email_->assign(value);
}
inline void helloworld::set_email(const char* value, size_t size) {
  set_has_email();
  if (email_ == &::google::protobuf::internal::kEmptyString) {
    email_ = new ::std::string;
  }
  email_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* helloworld::mutable_email() {
  set_has_email();
  if (email_ == &::google::protobuf::internal::kEmptyString) {
    email_ = new ::std::string;
  }
  return email_;
}
inline ::std::string* helloworld::release_email() {
  clear_has_email();
  if (email_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = email_;
    email_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void helloworld::set_allocated_email(::std::string* email) {
  if (email_ != &::google::protobuf::internal::kEmptyString) {
    delete email_;
  }
  if (email) {
    set_has_email();
    email_ = email;
  } else {
    clear_has_email();
    email_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace im

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_im_2ehelloworld_2eproto__INCLUDED
