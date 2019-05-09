#pragma once
enum CPU_Rank { P1 = 1, P2, P3, P4, P5, P6, P7 };    //����ö������
class CPU
{
private:
	CPU_Rank rank;          //��ö����������CPU�ȼ�
	int frequency;            //Ƶ��MHz����
	float voltage;              //��ѹ
public:
	void run( );
	void stop( );
	CPU( );
	CPU(CPU_Rank rank_, int frequency_, float voltage_);
	CPU(const CPU& exCPU);
	~CPU( );
};