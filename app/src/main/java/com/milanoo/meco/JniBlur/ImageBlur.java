package com.milanoo.meco.JniBlur;

import android.graphics.Bitmap;

/**
 * Created by SoLi on 2015/8/31.
 */
public class ImageBlur {

    public static native void blurIntArray(int[] pImg, int w, int h, int r);

    public static native void blurBitMap(Bitmap bitmap, int r);

    static {
        System.loadLibrary("MecoImageBlur");
    }
}
