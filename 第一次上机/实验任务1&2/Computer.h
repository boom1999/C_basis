#pragma once
#include "CPU.h"
#include "RAM.h"
#include "CDROM.h"
class Computer
{
private:
	CPU cpu;                //Ð¾Æ¬
	RAM ram;               //ÄÚ´æ
	CDROM cdrom;            //¹âÇý
public:
	Computer( );
	Computer(CPU cpu_, RAM ram_, CDROM cdrom_);
	Computer(const Computer& exComputer);
	~Computer( );
	void run( );
	void stop( );
};

