# generated from rosidl_generator_py/resource/_idl.py.em
# with input from motion_capture_tracking_interfaces:msg/NamedPoseArrayV2.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_NamedPoseArrayV2(type):
    """Metaclass of message 'NamedPoseArrayV2'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('motion_capture_tracking_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'motion_capture_tracking_interfaces.msg.NamedPoseArrayV2')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__named_pose_array_v2
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__named_pose_array_v2
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__named_pose_array_v2
            cls._TYPE_SUPPORT = module.type_support_msg__msg__named_pose_array_v2
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__named_pose_array_v2

            from motion_capture_tracking_interfaces.msg import LatencyInfo
            if LatencyInfo.__class__._TYPE_SUPPORT is None:
                LatencyInfo.__class__.__import_type_support__()

            from motion_capture_tracking_interfaces.msg import NamedPose
            if NamedPose.__class__._TYPE_SUPPORT is None:
                NamedPose.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NamedPoseArrayV2(metaclass=Metaclass_NamedPoseArrayV2):
    """Message class 'NamedPoseArrayV2'."""

    __slots__ = [
        '_header',
        '_timestamp',
        '_latencies',
        '_poses',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'timestamp': 'uint64',
        'latencies': 'sequence<motion_capture_tracking_interfaces/LatencyInfo>',
        'poses': 'sequence<motion_capture_tracking_interfaces/NamedPose>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['motion_capture_tracking_interfaces', 'msg'], 'LatencyInfo')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['motion_capture_tracking_interfaces', 'msg'], 'NamedPose')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.timestamp = kwargs.get('timestamp', int())
        self.latencies = kwargs.get('latencies', [])
        self.poses = kwargs.get('poses', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.timestamp != other.timestamp:
            return False
        if self.latencies != other.latencies:
            return False
        if self.poses != other.poses:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if self._check_fields:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'timestamp' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'timestamp' field must be an unsigned integer in [0, 18446744073709551615]"
        self._timestamp = value

    @builtins.property
    def latencies(self):
        """Message field 'latencies'."""
        return self._latencies

    @latencies.setter
    def latencies(self, value):
        if self._check_fields:
            from motion_capture_tracking_interfaces.msg import LatencyInfo
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, LatencyInfo) for v in value) and
                 True), \
                "The 'latencies' field must be a set or sequence and each value of type 'LatencyInfo'"
        self._latencies = value

    @builtins.property
    def poses(self):
        """Message field 'poses'."""
        return self._poses

    @poses.setter
    def poses(self, value):
        if self._check_fields:
            from motion_capture_tracking_interfaces.msg import NamedPose
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, NamedPose) for v in value) and
                 True), \
                "The 'poses' field must be a set or sequence and each value of type 'NamedPose'"
        self._poses = value
