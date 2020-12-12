#pragma once
#include "Media.h"
ref class Restriction
{
private:
	System::String^ data;
	System::String^ time;
	Media media;
public:
	void setData(System::String^);
	void setTime(System::String^);
	System::String^ getData();
	System::String^ getTime();

	Media setMedia(Media);
	void getMedia();


};

