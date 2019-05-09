#pragma once
enum CPU_Rank { P1 = 1, P2, P3, P4, P5, P6, P7 };    //声明枚举类型
class CPU
{
private:
	CPU_Rank rank;          //用枚举类型声明CPU等级
	int frequency;            //频率MHz整型
	float voltage;              //电压
public:
	void run( );
	void stop( );
	CPU( );
	CPU(CPU_Rank rank_, int frequency_, float voltage_);
	CPU(const CPU& exCPU);
	~CPU( );
};