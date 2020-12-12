#include "Restriction.h"


void Restriction::setData(System::String^ data)
{
	this->data = data;
}

void Restriction::setTime(System::String^ time)
{
	this->time = time;
}

System::String^ Restriction::getData()
{
	return data;
}

System::String^ Restriction::getTime()
{
	return time;
}

void Restriction::setMedia(System::String^ media)
{
	this->media = media;
}

System::String^ Restriction::getMedia()
{
	return media;
}
