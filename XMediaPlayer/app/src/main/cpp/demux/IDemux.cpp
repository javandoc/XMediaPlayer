//
// Created by developer on 2018/8/27.
//

#include "IDemux.h"
#include "../log/MLOG.h"

void IDemux::main() {
    while (!isExit){
        AVData data = readMediaData();
//        if(data.isAudio){
//            LOGD("audio stream   pts:%d   size:%d",data.pts,data.size);
//        }else{
//            LOGD("video stream   pts:%d   size:%d",data.pts,data.size);
//        }
        if(data.size>0){
            notifyObserver(data);
        }
    }
}