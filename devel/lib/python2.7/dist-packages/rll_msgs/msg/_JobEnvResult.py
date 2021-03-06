# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from rll_msgs/JobEnvResult.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import rll_msgs.msg

class JobEnvResult(genpy.Message):
  _md5sum = "0a9a79cbd2a58e892938423b28bbc283"
  _type = "rll_msgs/JobEnvResult"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
JobStatus job
JobExtraField[] job_data

================================================================================
MSG: rll_msgs/JobStatus
uint8 status
uint8 SUCCESS = 0
uint8 FAILURE = 1
uint8 INTERNAL_ERROR = 2
string status_detail

================================================================================
MSG: rll_msgs/JobExtraField
string description
float32 value
"""
  __slots__ = ['job','job_data']
  _slot_types = ['rll_msgs/JobStatus','rll_msgs/JobExtraField[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       job,job_data

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(JobEnvResult, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.job is None:
        self.job = rll_msgs.msg.JobStatus()
      if self.job_data is None:
        self.job_data = []
    else:
      self.job = rll_msgs.msg.JobStatus()
      self.job_data = []

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      buff.write(_get_struct_B().pack(self.job.status))
      _x = self.job.status_detail
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      length = len(self.job_data)
      buff.write(_struct_I.pack(length))
      for val1 in self.job_data:
        _x = val1.description
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        buff.write(_get_struct_f().pack(val1.value))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.job is None:
        self.job = rll_msgs.msg.JobStatus()
      if self.job_data is None:
        self.job_data = None
      end = 0
      start = end
      end += 1
      (self.job.status,) = _get_struct_B().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.job.status_detail = str[start:end].decode('utf-8')
      else:
        self.job.status_detail = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.job_data = []
      for i in range(0, length):
        val1 = rll_msgs.msg.JobExtraField()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.description = str[start:end].decode('utf-8')
        else:
          val1.description = str[start:end]
        start = end
        end += 4
        (val1.value,) = _get_struct_f().unpack(str[start:end])
        self.job_data.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      buff.write(_get_struct_B().pack(self.job.status))
      _x = self.job.status_detail
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      length = len(self.job_data)
      buff.write(_struct_I.pack(length))
      for val1 in self.job_data:
        _x = val1.description
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        buff.write(_get_struct_f().pack(val1.value))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.job is None:
        self.job = rll_msgs.msg.JobStatus()
      if self.job_data is None:
        self.job_data = None
      end = 0
      start = end
      end += 1
      (self.job.status,) = _get_struct_B().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.job.status_detail = str[start:end].decode('utf-8')
      else:
        self.job.status_detail = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.job_data = []
      for i in range(0, length):
        val1 = rll_msgs.msg.JobExtraField()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.description = str[start:end].decode('utf-8')
        else:
          val1.description = str[start:end]
        start = end
        end += 4
        (val1.value,) = _get_struct_f().unpack(str[start:end])
        self.job_data.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_B = None
def _get_struct_B():
    global _struct_B
    if _struct_B is None:
        _struct_B = struct.Struct("<B")
    return _struct_B
_struct_f = None
def _get_struct_f():
    global _struct_f
    if _struct_f is None:
        _struct_f = struct.Struct("<f")
    return _struct_f
