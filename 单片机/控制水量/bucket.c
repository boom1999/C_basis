#include "bucket.h"

#define BOTTOM  100     //底面面积
#define LEAKCOE 1       //漏水量与水位高度系数
#define BUCKETHEIGHT 10000      //最高水位，超过即溢出，不再升高

float levelNow = 0;     //当前水位
float levelAim = 1000;  //目标水位


void levelUpdate(float leak, float pour){     //更新水位
  if(levelNow + (pour - leak)/BOTTOM > 0)
    levelNow += (pour - leak)/BOTTOM ;
  else 
     levelNow = 0;
  
  if(levelNow > BUCKETHEIGHT) levelNow = BUCKETHEIGHT;
} 


float leakResult(float levelNow){     //漏水水量
  return LEAKCOE * levelNow * BOTTOM;
}

float pourResult(float KP, float KI, float KD){     //注水水量
  float error =0;
  static float I_term = 0;
  static float error_last = 0; //前一次误差
  static float D_term = 0;
  
  error =  levelAim - levelNow; //更新误差
  I_term += error;      //积分项
  D_term = error - error_last;
  
  return KP*error + KI*I_term + KD*D_term;
}