# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: perf_conf.proto
"""Generated protocol buffer code."""
from google.protobuf.internal import enum_type_wrapper
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='perf_conf.proto',
  package='apollo.cyber.proto',
  syntax='proto2',
  serialized_options=None,
  create_key=_descriptor._internal_create_key,
  serialized_pb=b'\n\x0fperf_conf.proto\x12\x12\x61pollo.cyber.proto\"R\n\x08PerfConf\x12\x15\n\x06\x65nable\x18\x01 \x01(\x08:\x05\x66\x61lse\x12/\n\x04type\x18\x02 \x01(\x0e\x32\x1c.apollo.cyber.proto.PerfType:\x03\x41LL*=\n\x08PerfType\x12\t\n\x05SCHED\x10\x01\x12\r\n\tTRANSPORT\x10\x02\x12\x0e\n\nDATA_CACHE\x10\x03\x12\x07\n\x03\x41LL\x10\x04'
)

_PERFTYPE = _descriptor.EnumDescriptor(
  name='PerfType',
  full_name='apollo.cyber.proto.PerfType',
  filename=None,
  file=DESCRIPTOR,
  create_key=_descriptor._internal_create_key,
  values=[
    _descriptor.EnumValueDescriptor(
      name='SCHED', index=0, number=1,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='TRANSPORT', index=1, number=2,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='DATA_CACHE', index=2, number=3,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='ALL', index=3, number=4,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
  ],
  containing_type=None,
  serialized_options=None,
  serialized_start=123,
  serialized_end=184,
)
_sym_db.RegisterEnumDescriptor(_PERFTYPE)

PerfType = enum_type_wrapper.EnumTypeWrapper(_PERFTYPE)
SCHED = 1
TRANSPORT = 2
DATA_CACHE = 3
ALL = 4



_PERFCONF = _descriptor.Descriptor(
  name='PerfConf',
  full_name='apollo.cyber.proto.PerfConf',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='enable', full_name='apollo.cyber.proto.PerfConf.enable', index=0,
      number=1, type=8, cpp_type=7, label=1,
      has_default_value=True, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='type', full_name='apollo.cyber.proto.PerfConf.type', index=1,
      number=2, type=14, cpp_type=8, label=1,
      has_default_value=True, default_value=4,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto2',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=39,
  serialized_end=121,
)

_PERFCONF.fields_by_name['type'].enum_type = _PERFTYPE
DESCRIPTOR.message_types_by_name['PerfConf'] = _PERFCONF
DESCRIPTOR.enum_types_by_name['PerfType'] = _PERFTYPE
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

PerfConf = _reflection.GeneratedProtocolMessageType('PerfConf', (_message.Message,), {
  'DESCRIPTOR' : _PERFCONF,
  '__module__' : 'perf_conf_pb2'
  # @@protoc_insertion_point(class_scope:apollo.cyber.proto.PerfConf)
  })
_sym_db.RegisterMessage(PerfConf)


# @@protoc_insertion_point(module_scope)
