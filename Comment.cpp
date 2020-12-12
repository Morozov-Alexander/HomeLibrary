#include "Comment.h"

void Comment::setRecord(System::String^ record)
{
	this->record = record;
}

void Comment::setDate(System::String^ date)
{
	this->date = date;
}

System::String^ Comment::getRecord()
{
	return record;
}

System::String^ Comment::getDate()
{
	return date;
}

System::String^ Comment::editRecord(System::String^ record)
{
	setRecord(record);
	return getRecord();
}
