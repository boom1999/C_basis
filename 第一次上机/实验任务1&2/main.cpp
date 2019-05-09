#include "CPU.h"
#include<iostream>
#include<string>
#include "Computer.h"
#include "RAM.h"
#include "CDROM.h"


void CPU::run( )
{
	std::cout << "This CPU's rank is:" << rank << ",frequency is :"
		<< frequency <<"GHz"<< ",voltage is :" << voltage <<"V"<< "!\n";
}

void CPU::stop( )
{
	std::cout << "This is just a test!\n";
}

CPU::CPU( )
{
	rank = P1;
	frequency = 2;
	voltage = 1.3;
	std::cout << "CPU类 调用了默认构造函数!\n";
}

CPU::CPU(CPU_Rank rank_, int frequency_, float voltage_)
{
	rank = rank_;
	frequency = frequency_;
	voltage = voltage_;
	std::cout << "CPU类 调用了普通构造函数!\n";
}


CPU::CPU(const CPU& exCPU)
{
	rank = exCPU.rank;
	frequency = exCPU.frequency;
	voltage = exCPU.voltage;
	std::cout << "CPU类 调用了复制构造函数!\n";
}

CPU::~CPU( )
{
	std::cout << "CPU类 调用了析构函数！" << std::endl;
}


Computer::Computer( )
{
}

Computer::Computer(CPU cpu_, RAM ram_, CDROM cdrom_):cpu(cpu_),ram(ram_),cdrom(cdrom_)
{
	std::cout << "Computer类 调用了普通构造函数!\n";
}

Computer::Computer(const Computer& exComputer)
{
	cpu = exComputer.cpu; 
	ram = exComputer.ram;
	cdrom = exComputer.cdrom;
	std::cout << "Computer类 调用了复制构造函数!\n";
}


Computer::~Computer( )
{
	std::cout << "Computer类 调用了析构函数!\n";
}

void Computer::run( )
{
	cpu.run( );
	ram.run( );
	cdrom.run( );
}

void Computer::stop( )
{
	std::cout << "This is just a test!\n";
}


void RAM::run( )
{
	std::cout << "RAM is:"<<ram<<std::endl;
}

void RAM::stop( )
{
	std::cout << "This is just a test!\n";
}

RAM::RAM( )
{
	ram = 8;
	std::cout << "RAM类 调用了默认构造函数!\n";
}

RAM::RAM(int ram_)
{
	ram = ram_;
	std::cout << "RAM类 调用了普通构造函数!\n";
}

RAM::RAM(const RAM& exRAM)
{
	ram = exRAM.ram;
	std::cout << "RAM类 调用了复制构造函数!\n";
}


RAM::~RAM( )
{
	std::cout << "RAM类 调用了析构函数!\n";
}


void CDROM::run( )
{
	std::cout << "CDROM is :"<<name<<std::endl;
}

void CDROM::stop( )
{
	std::cout << "This is just a test!\n";
}

CDROM::CDROM( )
{
	name = "Samsung";
	std::cout << "CDROM类 调用了默认构造函数!\n";
}

CDROM::CDROM(std::string name_)
{
	name = name_;
	std::cout << "CDROM类 调用了普通构造函数!\n";
}

CDROM::CDROM(const CDROM& exCDROM)
{
	name = exCDROM.name;
	std::cout << "CDROM类 调用了复制构造函数!\n";
}


CDROM::~CDROM( )
{
	std::cout << "CDROM类 调用了析构函数!\n";
}

int main( )
{
	CPU c_A;
	CPU c_B(P2, 3, 1.5);
	CPU c_C(c_A);
	c_A.run( );     c_A.stop( );
	c_B.run( );   c_B.stop( );
	c_C.run( );    c_C.stop( );
	RAM r_A;
	RAM r_B(8);
	RAM r_c(r_A);
	r_A.run( );    r_A.stop( );
	r_B.run( );    r_B.stop( );
	r_c.run( );    r_c.stop( );
	CDROM cd_A;
	CDROM cd_B("HuaWei");
	CDROM cd_C(cd_B);
	cd_A.run( );    cd_A.stop( );
	cd_B.run( );    cd_B.stop( );
	cd_C.run( );    cd_C.stop( );
	Computer A(c_B, r_B, cd_B);
	A.run( );
	A.stop( );
	return 0;
}