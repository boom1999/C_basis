#pragma once
class RAM
{
private:
	int ram;          //�ڴ��С
public:
	void run( );
	void stop( );
	RAM( );
	RAM(int ram_);
	RAM(const RAM& exRAM);
	~RAM( );
};

