#ifndef __BUCKET_H__
#define __BUCKET_H__

void levelUpdate(float leak, float pour);
float leakResult(float levelNow);
float pourResult(float KP, float KI, float KD);

extern float levelNow;     //��ǰˮλ
extern float levelAim;  //Ŀ��ˮλ
#endif