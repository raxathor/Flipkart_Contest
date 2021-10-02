# generated from rosidl_generator_py/resource/_idl.py.em
# with input from flipkart_msgs:msg/Pose.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Pose(type):
    """Metaclass of message 'Pose'."""

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
            module = import_type_support('flipkart_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'flipkart_msgs.msg.Pose')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__pose
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__pose
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__pose
            cls._TYPE_SUPPORT = module.type_support_msg__msg__pose
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__pose

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Pose(metaclass=Metaclass_Pose):
    """Message class 'Pose'."""

    __slots__ = [
        '_id0',
        '_x0',
        '_y0',
        '_yaw0',
        '_id1',
        '_x1',
        '_y1',
        '_yaw1',
        '_id2',
        '_x2',
        '_y2',
        '_yaw2',
        '_id3',
        '_x3',
        '_y3',
        '_yaw3',
    ]

    _fields_and_field_types = {
        'id0': 'int32',
        'x0': 'int32',
        'y0': 'int32',
        'yaw0': 'float',
        'id1': 'int32',
        'x1': 'int32',
        'y1': 'int32',
        'yaw1': 'float',
        'id2': 'int32',
        'x2': 'int32',
        'y2': 'int32',
        'yaw2': 'float',
        'id3': 'int32',
        'x3': 'int32',
        'y3': 'int32',
        'yaw3': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id0 = kwargs.get('id0', int())
        self.x0 = kwargs.get('x0', int())
        self.y0 = kwargs.get('y0', int())
        self.yaw0 = kwargs.get('yaw0', float())
        self.id1 = kwargs.get('id1', int())
        self.x1 = kwargs.get('x1', int())
        self.y1 = kwargs.get('y1', int())
        self.yaw1 = kwargs.get('yaw1', float())
        self.id2 = kwargs.get('id2', int())
        self.x2 = kwargs.get('x2', int())
        self.y2 = kwargs.get('y2', int())
        self.yaw2 = kwargs.get('yaw2', float())
        self.id3 = kwargs.get('id3', int())
        self.x3 = kwargs.get('x3', int())
        self.y3 = kwargs.get('y3', int())
        self.yaw3 = kwargs.get('yaw3', float())

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
        if self.id0 != other.id0:
            return False
        if self.x0 != other.x0:
            return False
        if self.y0 != other.y0:
            return False
        if self.yaw0 != other.yaw0:
            return False
        if self.id1 != other.id1:
            return False
        if self.x1 != other.x1:
            return False
        if self.y1 != other.y1:
            return False
        if self.yaw1 != other.yaw1:
            return False
        if self.id2 != other.id2:
            return False
        if self.x2 != other.x2:
            return False
        if self.y2 != other.y2:
            return False
        if self.yaw2 != other.yaw2:
            return False
        if self.id3 != other.id3:
            return False
        if self.x3 != other.x3:
            return False
        if self.y3 != other.y3:
            return False
        if self.yaw3 != other.yaw3:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def id0(self):
        """Message field 'id0'."""
        return self._id0

    @id0.setter
    def id0(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id0' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'id0' field must be an integer in [-2147483648, 2147483647]"
        self._id0 = value

    @property
    def x0(self):
        """Message field 'x0'."""
        return self._x0

    @x0.setter
    def x0(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'x0' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'x0' field must be an integer in [-2147483648, 2147483647]"
        self._x0 = value

    @property
    def y0(self):
        """Message field 'y0'."""
        return self._y0

    @y0.setter
    def y0(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'y0' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'y0' field must be an integer in [-2147483648, 2147483647]"
        self._y0 = value

    @property
    def yaw0(self):
        """Message field 'yaw0'."""
        return self._yaw0

    @yaw0.setter
    def yaw0(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw0' field must be of type 'float'"
        self._yaw0 = value

    @property
    def id1(self):
        """Message field 'id1'."""
        return self._id1

    @id1.setter
    def id1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id1' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'id1' field must be an integer in [-2147483648, 2147483647]"
        self._id1 = value

    @property
    def x1(self):
        """Message field 'x1'."""
        return self._x1

    @x1.setter
    def x1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'x1' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'x1' field must be an integer in [-2147483648, 2147483647]"
        self._x1 = value

    @property
    def y1(self):
        """Message field 'y1'."""
        return self._y1

    @y1.setter
    def y1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'y1' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'y1' field must be an integer in [-2147483648, 2147483647]"
        self._y1 = value

    @property
    def yaw1(self):
        """Message field 'yaw1'."""
        return self._yaw1

    @yaw1.setter
    def yaw1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw1' field must be of type 'float'"
        self._yaw1 = value

    @property
    def id2(self):
        """Message field 'id2'."""
        return self._id2

    @id2.setter
    def id2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id2' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'id2' field must be an integer in [-2147483648, 2147483647]"
        self._id2 = value

    @property
    def x2(self):
        """Message field 'x2'."""
        return self._x2

    @x2.setter
    def x2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'x2' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'x2' field must be an integer in [-2147483648, 2147483647]"
        self._x2 = value

    @property
    def y2(self):
        """Message field 'y2'."""
        return self._y2

    @y2.setter
    def y2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'y2' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'y2' field must be an integer in [-2147483648, 2147483647]"
        self._y2 = value

    @property
    def yaw2(self):
        """Message field 'yaw2'."""
        return self._yaw2

    @yaw2.setter
    def yaw2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw2' field must be of type 'float'"
        self._yaw2 = value

    @property
    def id3(self):
        """Message field 'id3'."""
        return self._id3

    @id3.setter
    def id3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id3' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'id3' field must be an integer in [-2147483648, 2147483647]"
        self._id3 = value

    @property
    def x3(self):
        """Message field 'x3'."""
        return self._x3

    @x3.setter
    def x3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'x3' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'x3' field must be an integer in [-2147483648, 2147483647]"
        self._x3 = value

    @property
    def y3(self):
        """Message field 'y3'."""
        return self._y3

    @y3.setter
    def y3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'y3' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'y3' field must be an integer in [-2147483648, 2147483647]"
        self._y3 = value

    @property
    def yaw3(self):
        """Message field 'yaw3'."""
        return self._yaw3

    @yaw3.setter
    def yaw3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw3' field must be of type 'float'"
        self._yaw3 = value
