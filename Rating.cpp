#include "Rating.h"

void Rating::setRate(int rate)
{
	this->rate = rate;
}

void Rating::setDate(System::String^ date)
{
	this->date = date;
}

int Rating::getRate()
{
	return this->rate;
}

System::String^ Rating::getDate()
{
	return date;
}

int Rating::editRate(int rate)
{
	setRate(rate);
	return getRate();
}
