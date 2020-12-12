#include "Media.h"

void Media::setId(System::String^ id)
{
	this->id = id;
}

void Media::setName(System::String^ name)
{
	this->name = name;
}

void Media::setDate(System::String^ date)
{
	this->date = date;
}

void Media::setfile(System::String^ file)
{
	this->file = file;
}

System::String^ Media::getId()
{
	return id;
}

System::String^ Media::getName()
{
	return name;
}

System::String^ Media::getDate()
{
	return date;
}

System::String^ Media::getfile()
{
	return file;
}
