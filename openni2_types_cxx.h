// ============================================================================
// openni2_types_cxx.h: Types that are C++ specific
// (c) Chris Hodapp, 2013
// ============================================================================
#ifndef OPENNI2_TYPES_CXX
#define OPENNI2_TYPES_CXX

#ifdef OPENNI2_TYPES_C
#error You cannot #include both openni2_types_cxx.h and openni2_types_c.h.
#endif

#if !defined(__cplusplus)
#error C++ compiler required.
#endif

#include <OpenNI.h>

// ==================================================================
// Typedefs for C++ classes treated as opaque pointers in C interface
// ==================================================================
typedef openni::Array<openni::VideoMode> oni_VideoModeArray;
typedef openni::Array<openni::DeviceInfo> oni_DeviceInfoArray;
typedef openni::CameraSettings oni_CameraSettings;
typedef openni::Device oni_Device;
typedef openni::PlaybackControl oni_PlaybackControl;
typedef openni::Recorder oni_Recorder;
typedef openni::SensorInfo oni_SensorInfo;
typedef openni::VideoMode oni_VideoMode;
typedef openni::VideoFrameRef oni_VideoFrameRef;
typedef openni::VideoStream oni_VideoStream;
typedef openni::DepthPixel oni_DepthPixel;
// These four are still opaque pointers, but they are never used in the C
// interface directly.
typedef openni::OpenNI::DeviceConnectedListener
    oni_DeviceConnectedListener_cxx;
typedef openni::OpenNI::DeviceDisconnectedListener
    oni_DeviceDisconnectedListener_cxx;
typedef openni::OpenNI::DeviceStateChangedListener
    oni_DeviceStateChangedListener_cxx;
typedef openni::VideoStream::NewFrameListener
    oni_NewFrameListener_cxx;

// ==================
// Typedefs for enums
// ==================
typedef openni::DeviceState oni_DeviceState;
typedef openni::ImageRegistrationMode oni_ImageRegistrationMode;
typedef openni::PixelFormat oni_PixelFormat;
typedef openni::SensorType oni_SensorType;
typedef openni::Status oni_Status;

#endif // OPENNI2_TYPES_CXX
