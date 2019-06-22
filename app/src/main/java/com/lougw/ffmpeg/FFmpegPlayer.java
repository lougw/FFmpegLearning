package com.lougw.ffmpeg;

public class FFmpegPlayer {
    static {
        System.loadLibrary("Player");
        System.loadLibrary("avcodec");
        System.loadLibrary("avfilter");
        System.loadLibrary("avformat");
        System.loadLibrary("avutil");
        System.loadLibrary("swresample");
        System.loadLibrary("swscale");
    }

    public native void playMyMedia(String url);

}
