package com.milanoo.meco.JniBlur;

/**
 * Created by Soli on 2017/3/16.
 */
public class StringFromJni {

    public static native String getStringFromJni();

    static {
        System.loadLibrary("stringJni");
    }

    /***
     * 超级简单的Android Studio jni 实现(无需命令行)
     * http://www.jianshu.com/p/e689d0196a17
     *
     * Android Studio使用gradle-experimental构建NDK工程(无需Android.mk、Application.mk文件)
     * http://www.jianshu.com/p/7844aafe897d
     *
     *Android Studio NDk调试(基于gradle-experimental插件与LLDB)
     * http://www.jianshu.com/p/178a2169b7ff
     */
}
