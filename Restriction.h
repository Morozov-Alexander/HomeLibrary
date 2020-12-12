#pragma once
#include "Media.h"
#include <vector>
ref class Restriction
{
private:
	System::String^ data;
	System::String^ time;
	System::String^ media;

public:
	void setData(System::String^);
	void setTime(System::String^);
	System::String^ getData();
	System::String^ getTime();

	void setMedia(System::String^);
	System::String^ getMedia();


};

