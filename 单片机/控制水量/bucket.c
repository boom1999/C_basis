#include "bucket.h"

#define BOTTOM  100     //�������
#define LEAKCOE 1       //©ˮ����ˮλ�߶�ϵ��
#define BUCKETHEIGHT 10000      //���ˮλ���������������������

float levelNow = 0;     //��ǰˮλ
float levelAim = 1000;  //Ŀ��ˮλ


void levelUpdate(float leak, float pour){     //����ˮλ
  if(levelNow + (pour - leak)/BOTTOM > 0)
    levelNow += (pour - leak)/BOTTOM ;
  else 
     levelNow = 0;
  
  if(levelNow > BUCKETHEIGHT) levelNow = BUCKETHEIGHT;
} 


float leakResult(float levelNow){     //©ˮˮ��
  return LEAKCOE * levelNow * BOTTOM;
}

float pourResult(float KP, float KI, float KD){     //עˮˮ��
  float error =0;
  static float I_term = 0;
  static float error_last = 0; //ǰһ�����
  static float D_term = 0;
  
  error =  levelAim - levelNow; //�������
  I_term += error;      //������
  D_term = error - error_last;
  
  return KP*error + KI*I_term + KD*D_term;
}