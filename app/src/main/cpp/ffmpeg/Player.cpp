#include <jni.h>
#include <string>
#include <android/log.h>
#include "FFmpegPlayer.h"
extern "C" { //编码
#include "include/libavcodec/avcodec.h" //封装格式处理
#include "include/libavformat/avformat.h" //像素处理
#include "include/libswscale/swscale.h"
#include "include/libavutil/avutil.h"


#define LOGI(FORMAT, ...) __android_log_print(ANDROID_LOG_INFO,"Lgw",FORMAT,##__VA_ARGS__);
#define LOGE(FORMAT, ...) __android_log_print(ANDROID_LOG_ERROR,"Lgw",FORMAT,##__VA_ARGS__);

JNIEXPORT void JNICALL
Java_com_lougw_ffmpeg_FFmpegPlayer_playMyMedia(JNIEnv *env, jobject instance, jstring url_) {
    const char *url = env->GetStringUTFChars(url_, 0);
    av_register_all();
    AVCodec *c_temp = av_codec_next(NULL);
    while (c_temp != NULL) {
        switch (c_temp->type) {
            case AVMEDIA_TYPE_VIDEO:
                LOGI("[Video]:%s", c_temp->name)
                break;
            case AVMEDIA_TYPE_AUDIO:
                LOGI("[Audio]:%s", c_temp->name)
                break;
            default:
                LOGI("[Other]:%s", c_temp->name)
                break;
        }

    }

    env->ReleaseStringUTFChars(url_, url);
}




}

jstring Java_com_lougw_ffmpeg_FFmpegPlayer_urlprotocolinfo(JNIEnv *, jobject) {
    return nullptr;
}

jstring Java_com_lougw_ffmpeg_FFmpegPlayer_avformatinfo(JNIEnv *, jobject) {
    return nullptr;
}

jstring Java_com_lougw_ffmpeg_FFmpegPlayer_avcodecinfo(JNIEnv *, jobject) {
    return nullptr;
}

jstring Java_com_lougw_ffmpeg_FFmpegPlayer_avfilterinfo(JNIEnv *, jobject) {
    return nullptr;
}

jstring Java_com_lougw_ffmpeg_FFmpegPlayer_configurationinfo(JNIEnv *, jobject) {
    return nullptr;
}
