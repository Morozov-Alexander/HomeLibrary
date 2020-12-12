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
	return System::String();
}

System::String^ Restriction::getTime()
{
	return System::String();
}

Media Restriction::setMedia(Media)
{
	return Media();
}

void Restriction::getMedia()
{
	throw gcnew System::NotImplementedException();
}
