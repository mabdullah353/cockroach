// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: github.com/gogo/protobuf/gogoproto/gogo.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "github.com/gogo/protobuf/gogoproto/gogo.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace gogoproto {

namespace {


}  // namespace


void protobuf_AssignDesc_github_2ecom_2fgogo_2fprotobuf_2fgogoproto_2fgogo_2eproto() {
  protobuf_AddDesc_github_2ecom_2fgogo_2fprotobuf_2fgogoproto_2fgogo_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "github.com/gogo/protobuf/gogoproto/gogo.proto");
  GOOGLE_CHECK(file != NULL);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_github_2ecom_2fgogo_2fprotobuf_2fgogoproto_2fgogo_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

}  // namespace

void protobuf_ShutdownFile_github_2ecom_2fgogo_2fprotobuf_2fgogoproto_2fgogo_2eproto() {
}

void protobuf_AddDesc_github_2ecom_2fgogo_2fprotobuf_2fgogoproto_2fgogo_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::protobuf_AddDesc_google_2fprotobuf_2fdescriptor_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n-github.com/gogo/protobuf/gogoproto/gog"
    "o.proto\022\tgogoproto\032 google/protobuf/desc"
    "riptor.proto:;\n\023goproto_enum_prefix\022\034.go"
    "ogle.protobuf.EnumOptions\030\261\344\003 \001(\010:=\n\025gop"
    "roto_enum_stringer\022\034.google.protobuf.Enu"
    "mOptions\030\305\344\003 \001(\010:5\n\renum_stringer\022\034.goog"
    "le.protobuf.EnumOptions\030\306\344\003 \001(\010:;\n\023gopro"
    "to_getters_all\022\034.google.protobuf.FileOpt"
    "ions\030\231\354\003 \001(\010:\?\n\027goproto_enum_prefix_all\022"
    "\034.google.protobuf.FileOptions\030\232\354\003 \001(\010:<\n"
    "\024goproto_stringer_all\022\034.google.protobuf."
    "FileOptions\030\233\354\003 \001(\010:9\n\021verbose_equal_all"
    "\022\034.google.protobuf.FileOptions\030\234\354\003 \001(\010:0"
    "\n\010face_all\022\034.google.protobuf.FileOptions"
    "\030\235\354\003 \001(\010:4\n\014gostring_all\022\034.google.protob"
    "uf.FileOptions\030\236\354\003 \001(\010:4\n\014populate_all\022\034"
    ".google.protobuf.FileOptions\030\237\354\003 \001(\010:4\n\014"
    "stringer_all\022\034.google.protobuf.FileOptio"
    "ns\030\240\354\003 \001(\010:3\n\013onlyone_all\022\034.google.proto"
    "buf.FileOptions\030\241\354\003 \001(\010:1\n\tequal_all\022\034.g"
    "oogle.protobuf.FileOptions\030\245\354\003 \001(\010:7\n\017de"
    "scription_all\022\034.google.protobuf.FileOpti"
    "ons\030\246\354\003 \001(\010:3\n\013testgen_all\022\034.google.prot"
    "obuf.FileOptions\030\247\354\003 \001(\010:4\n\014benchgen_all"
    "\022\034.google.protobuf.FileOptions\030\250\354\003 \001(\010:5"
    "\n\rmarshaler_all\022\034.google.protobuf.FileOp"
    "tions\030\251\354\003 \001(\010:7\n\017unmarshaler_all\022\034.googl"
    "e.protobuf.FileOptions\030\252\354\003 \001(\010:4\n\014buffer"
    "to_all\022\034.google.protobuf.FileOptions\030\253\354\003"
    " \001(\010:1\n\tsizer_all\022\034.google.protobuf.File"
    "Options\030\254\354\003 \001(\010:A\n\031goproto_enum_stringer"
    "_all\022\034.google.protobuf.FileOptions\030\255\354\003 \001"
    "(\010:9\n\021enum_stringer_all\022\034.google.protobu"
    "f.FileOptions\030\256\354\003 \001(\010:<\n\024unsafe_marshale"
    "r_all\022\034.google.protobuf.FileOptions\030\257\354\003 "
    "\001(\010:>\n\026unsafe_unmarshaler_all\022\034.google.p"
    "rotobuf.FileOptions\030\260\354\003 \001(\010:B\n\032goproto_e"
    "xtensions_map_all\022\034.google.protobuf.File"
    "Options\030\261\354\003 \001(\010:@\n\030goproto_unrecognized_"
    "all\022\034.google.protobuf.FileOptions\030\262\354\003 \001("
    "\010::\n\017goproto_getters\022\037.google.protobuf.M"
    "essageOptions\030\201\364\003 \001(\010:;\n\020goproto_stringe"
    "r\022\037.google.protobuf.MessageOptions\030\203\364\003 \001"
    "(\010:8\n\rverbose_equal\022\037.google.protobuf.Me"
    "ssageOptions\030\204\364\003 \001(\010:/\n\004face\022\037.google.pr"
    "otobuf.MessageOptions\030\205\364\003 \001(\010:3\n\010gostrin"
    "g\022\037.google.protobuf.MessageOptions\030\206\364\003 \001"
    "(\010:3\n\010populate\022\037.google.protobuf.Message"
    "Options\030\207\364\003 \001(\010:3\n\010stringer\022\037.google.pro"
    "tobuf.MessageOptions\030\300\213\004 \001(\010:2\n\007onlyone\022"
    "\037.google.protobuf.MessageOptions\030\211\364\003 \001(\010"
    ":0\n\005equal\022\037.google.protobuf.MessageOptio"
    "ns\030\215\364\003 \001(\010:6\n\013description\022\037.google.proto"
    "buf.MessageOptions\030\216\364\003 \001(\010:2\n\007testgen\022\037."
    "google.protobuf.MessageOptions\030\217\364\003 \001(\010:3"
    "\n\010benchgen\022\037.google.protobuf.MessageOpti"
    "ons\030\220\364\003 \001(\010:4\n\tmarshaler\022\037.google.protob"
    "uf.MessageOptions\030\221\364\003 \001(\010:6\n\013unmarshaler"
    "\022\037.google.protobuf.MessageOptions\030\222\364\003 \001("
    "\010:3\n\010bufferto\022\037.google.protobuf.MessageO"
    "ptions\030\223\364\003 \001(\010:0\n\005sizer\022\037.google.protobu"
    "f.MessageOptions\030\224\364\003 \001(\010:;\n\020unsafe_marsh"
    "aler\022\037.google.protobuf.MessageOptions\030\227\364"
    "\003 \001(\010:=\n\022unsafe_unmarshaler\022\037.google.pro"
    "tobuf.MessageOptions\030\230\364\003 \001(\010:A\n\026goproto_"
    "extensions_map\022\037.google.protobuf.Message"
    "Options\030\231\364\003 \001(\010:\?\n\024goproto_unrecognized\022"
    "\037.google.protobuf.MessageOptions\030\232\364\003 \001(\010"
    ":1\n\010nullable\022\035.google.protobuf.FieldOpti"
    "ons\030\351\373\003 \001(\010:.\n\005embed\022\035.google.protobuf.F"
    "ieldOptions\030\352\373\003 \001(\010:3\n\ncustomtype\022\035.goog"
    "le.protobuf.FieldOptions\030\353\373\003 \001(\t:3\n\ncust"
    "omname\022\035.google.protobuf.FieldOptions\030\354\373"
    "\003 \001(\t:0\n\007jsontag\022\035.google.protobuf.Field"
    "Options\030\355\373\003 \001(\t:1\n\010moretags\022\035.google.pro"
    "tobuf.FieldOptions\030\356\373\003 \001(\tB!\n\023com.google"
    ".protobufB\nGoGoProtos", 3061);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "github.com/gogo/protobuf/gogoproto/gogo.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::google::protobuf::EnumOptions::default_instance(),
    62001, 8, false, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::google::protobuf::EnumOptions::default_instance(),
    62021, 8, false, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::google::protobuf::EnumOptions::default_instance(),
    62022, 8, false, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::google::protobuf::FileOptions::default_instance(),
    63001, 8, false, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::google::protobuf::FileOptions::default_instance(),
    63002, 8, false, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::google::protobuf::FileOptions::default_instance(),
    63003, 8, false, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::google::protobuf::FileOptions::default_instance(),
    63004, 8, false, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::google::protobuf::FileOptions::default_instance(),
    63005, 8, false, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::google::protobuf::FileOptions::default_instance(),
    63006, 8, false, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::google::protobuf::FileOptions::default_instance(),
    63007, 8, false, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::google::protobuf::FileOptions::default_instance(),
    63008, 8, false, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::google::protobuf::FileOptions::default_instance(),
    63009, 8, false, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::google::protobuf::FileOptions::default_instance(),
    63013, 8, false, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::google::protobuf::FileOptions::default_instance(),
    63014, 8, false, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::google::protobuf::FileOptions::default_instance(),
    63015, 8, false, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::google::protobuf::FileOptions::default_instance(),
    63016, 8, false, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::google::protobuf::FileOptions::default_instance(),
    63017, 8, false, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::google::protobuf::FileOptions::default_instance(),
    63018, 8, false, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::google::protobuf::FileOptions::default_instance(),
    63019, 8, false, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::google::protobuf::FileOptions::default_instance(),
    63020, 8, false, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::google::protobuf::FileOptions::default_instance(),
    63021, 8, false, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::google::protobuf::FileOptions::default_instance(),
    63022, 8, false, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::google::protobuf::FileOptions::default_instance(),
    63023, 8, false, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::google::protobuf::FileOptions::default_instance(),
    63024, 8, false, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::google::protobuf::FileOptions::default_instance(),
    63025, 8, false, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::google::protobuf::FileOptions::default_instance(),
    63026, 8, false, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::google::protobuf::MessageOptions::default_instance(),
    64001, 8, false, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::google::protobuf::MessageOptions::default_instance(),
    64003, 8, false, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::google::protobuf::MessageOptions::default_instance(),
    64004, 8, false, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::google::protobuf::MessageOptions::default_instance(),
    64005, 8, false, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::google::protobuf::MessageOptions::default_instance(),
    64006, 8, false, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::google::protobuf::MessageOptions::default_instance(),
    64007, 8, false, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::google::protobuf::MessageOptions::default_instance(),
    67008, 8, false, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::google::protobuf::MessageOptions::default_instance(),
    64009, 8, false, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::google::protobuf::MessageOptions::default_instance(),
    64013, 8, false, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::google::protobuf::MessageOptions::default_instance(),
    64014, 8, false, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::google::protobuf::MessageOptions::default_instance(),
    64015, 8, false, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::google::protobuf::MessageOptions::default_instance(),
    64016, 8, false, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::google::protobuf::MessageOptions::default_instance(),
    64017, 8, false, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::google::protobuf::MessageOptions::default_instance(),
    64018, 8, false, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::google::protobuf::MessageOptions::default_instance(),
    64019, 8, false, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::google::protobuf::MessageOptions::default_instance(),
    64020, 8, false, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::google::protobuf::MessageOptions::default_instance(),
    64023, 8, false, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::google::protobuf::MessageOptions::default_instance(),
    64024, 8, false, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::google::protobuf::MessageOptions::default_instance(),
    64025, 8, false, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::google::protobuf::MessageOptions::default_instance(),
    64026, 8, false, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::google::protobuf::FieldOptions::default_instance(),
    65001, 8, false, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::google::protobuf::FieldOptions::default_instance(),
    65002, 8, false, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::google::protobuf::FieldOptions::default_instance(),
    65003, 9, false, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::google::protobuf::FieldOptions::default_instance(),
    65004, 9, false, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::google::protobuf::FieldOptions::default_instance(),
    65005, 9, false, false);
  ::google::protobuf::internal::ExtensionSet::RegisterExtension(
    &::google::protobuf::FieldOptions::default_instance(),
    65006, 9, false, false);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_github_2ecom_2fgogo_2fprotobuf_2fgogoproto_2fgogo_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_github_2ecom_2fgogo_2fprotobuf_2fgogoproto_2fgogo_2eproto {
  StaticDescriptorInitializer_github_2ecom_2fgogo_2fprotobuf_2fgogoproto_2fgogo_2eproto() {
    protobuf_AddDesc_github_2ecom_2fgogo_2fprotobuf_2fgogoproto_2fgogo_2eproto();
  }
} static_descriptor_initializer_github_2ecom_2fgogo_2fprotobuf_2fgogoproto_2fgogo_2eproto_;
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::EnumOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  goproto_enum_prefix(kGoprotoEnumPrefixFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::EnumOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  goproto_enum_stringer(kGoprotoEnumStringerFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::EnumOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  enum_stringer(kEnumStringerFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  goproto_getters_all(kGoprotoGettersAllFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  goproto_enum_prefix_all(kGoprotoEnumPrefixAllFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  goproto_stringer_all(kGoprotoStringerAllFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  verbose_equal_all(kVerboseEqualAllFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  face_all(kFaceAllFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  gostring_all(kGostringAllFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  populate_all(kPopulateAllFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  stringer_all(kStringerAllFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  onlyone_all(kOnlyoneAllFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  equal_all(kEqualAllFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  description_all(kDescriptionAllFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  testgen_all(kTestgenAllFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  benchgen_all(kBenchgenAllFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  marshaler_all(kMarshalerAllFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  unmarshaler_all(kUnmarshalerAllFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  bufferto_all(kBuffertoAllFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  sizer_all(kSizerAllFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  goproto_enum_stringer_all(kGoprotoEnumStringerAllFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  enum_stringer_all(kEnumStringerAllFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  unsafe_marshaler_all(kUnsafeMarshalerAllFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  unsafe_unmarshaler_all(kUnsafeUnmarshalerAllFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  goproto_extensions_map_all(kGoprotoExtensionsMapAllFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  goproto_unrecognized_all(kGoprotoUnrecognizedAllFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  goproto_getters(kGoprotoGettersFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  goproto_stringer(kGoprotoStringerFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  verbose_equal(kVerboseEqualFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  face(kFaceFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  gostring(kGostringFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  populate(kPopulateFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  stringer(kStringerFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  onlyone(kOnlyoneFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  equal(kEqualFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  description(kDescriptionFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  testgen(kTestgenFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  benchgen(kBenchgenFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  marshaler(kMarshalerFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  unmarshaler(kUnmarshalerFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  bufferto(kBuffertoFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  sizer(kSizerFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  unsafe_marshaler(kUnsafeMarshalerFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  unsafe_unmarshaler(kUnsafeUnmarshalerFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  goproto_extensions_map(kGoprotoExtensionsMapFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  goproto_unrecognized(kGoprotoUnrecognizedFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FieldOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  nullable(kNullableFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FieldOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  embed(kEmbedFieldNumber, false);
const ::std::string customtype_default("");
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FieldOptions,
    ::google::protobuf::internal::StringTypeTraits, 9, false >
  customtype(kCustomtypeFieldNumber, customtype_default);
const ::std::string customname_default("");
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FieldOptions,
    ::google::protobuf::internal::StringTypeTraits, 9, false >
  customname(kCustomnameFieldNumber, customname_default);
const ::std::string jsontag_default("");
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FieldOptions,
    ::google::protobuf::internal::StringTypeTraits, 9, false >
  jsontag(kJsontagFieldNumber, jsontag_default);
const ::std::string moretags_default("");
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FieldOptions,
    ::google::protobuf::internal::StringTypeTraits, 9, false >
  moretags(kMoretagsFieldNumber, moretags_default);

// @@protoc_insertion_point(namespace_scope)

}  // namespace gogoproto

// @@protoc_insertion_point(global_scope)
