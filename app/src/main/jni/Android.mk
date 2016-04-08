LOCAL_PATH		:= $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE    := MecoImageBlur
LOCAL_SRC_FILES := com_milanoo_meco_JniBlur_ImageBlur.cpp
LOCAL_LDLIBS    := -lm -llog -ljnigraphics

include $(BUILD_SHARED_LIBRARY)