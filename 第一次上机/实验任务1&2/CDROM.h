#pragma once
#include<string>
class CDROM
{
private:
	std::string name;
public:
	void run( );
	void stop( );
	CDROM( );
	CDROM(std::string name_);
	CDROM(const CDROM& exCDROM);
	~CDROM( );
};

