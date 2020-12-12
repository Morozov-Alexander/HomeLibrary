#include "Film.h"

void Film::setDescription(System::String^ description)
{
	this->description = description;
}

void Film::setGenre(System::String^ genre)
{
	this->genre = genre;
}

System::String^ Film::getDescription()
{
	return description;
}

System::String^ Film::getGenre()
{
	return genre;
}

void Film::playMedia()
{
	playFilm();
}

void Film::playFilm()
{
	//фнкция открытия и проигрования фильма
}
