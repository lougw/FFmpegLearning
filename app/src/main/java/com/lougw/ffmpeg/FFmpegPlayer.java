package com.lougw.ffmpeg;

public class FFmpegPlayer {
    static {
        System.loadLibrary("Player");
        System.loadLibrary("libavcodec");
        System.loadLibrary("libavdevice");
        System.loadLibrary("libavfilter");
        System.loadLibrary("libavformat");
        System.loadLibrary("libavutil");
        System.loadLibrary("libpostproc");
        System.loadLibrary("libswresample");
        System.loadLibrary("libswscale");
    }

    public native void playMyMedia(String url);

}
