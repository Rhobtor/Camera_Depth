# generated from rosidl_generator_py/resource/_idl.py.em
# with input from camera_interface:msg/Camera.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'position'
# Member 'dimensions'
# Member 'velocity'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Camera(type):
    """Metaclass of message 'Camera'."""

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
            module = import_type_support('camera_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'camera_interface.msg.Camera')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__camera
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__camera
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__camera
            cls._TYPE_SUPPORT = module.type_support_msg__msg__camera
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__camera

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Camera(metaclass=Metaclass_Camera):
    """Message class 'Camera'."""

    __slots__ = [
        '_id',
        '_label',
        '_position',
        '_confidence',
        '_dimensions',
        '_velocity',
    ]

    _fields_and_field_types = {
        'id': 'int64',
        'label': 'string',
        'position': 'sequence<double>',
        'confidence': 'double',
        'dimensions': 'sequence<double>',
        'velocity': 'sequence<double>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', int())
        self.label = kwargs.get('label', str())
        self.position = array.array('d', kwargs.get('position', []))
        self.confidence = kwargs.get('confidence', float())
        self.dimensions = array.array('d', kwargs.get('dimensions', []))
        self.velocity = array.array('d', kwargs.get('velocity', []))

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
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
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.id != other.id:
            return False
        if self.label != other.label:
            return False
        if self.position != other.position:
            return False
        if self.confidence != other.confidence:
            return False
        if self.dimensions != other.dimensions:
            return False
        if self.velocity != other.velocity:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property  # noqa: A003
    def id(self):
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'id' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._id = value

    @property
    def label(self):
        """Message field 'label'."""
        return self._label

    @label.setter
    def label(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'label' field must be of type 'str'"
        self._label = value

    @property
    def position(self):
        """Message field 'position'."""
        return self._position

    @position.setter
    def position(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'position' array.array() must have the type code of 'd'"
            self._position = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'position' field must be a set or sequence and each value of type 'float'"
        self._position = array.array('d', value)

    @property
    def confidence(self):
        """Message field 'confidence'."""
        return self._confidence

    @confidence.setter
    def confidence(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'confidence' field must be of type 'float'"
        self._confidence = value

    @property
    def dimensions(self):
        """Message field 'dimensions'."""
        return self._dimensions

    @dimensions.setter
    def dimensions(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'dimensions' array.array() must have the type code of 'd'"
            self._dimensions = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'dimensions' field must be a set or sequence and each value of type 'float'"
        self._dimensions = array.array('d', value)

    @property
    def velocity(self):
        """Message field 'velocity'."""
        return self._velocity

    @velocity.setter
    def velocity(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'velocity' array.array() must have the type code of 'd'"
            self._velocity = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'velocity' field must be a set or sequence and each value of type 'float'"
        self._velocity = array.array('d', value)
