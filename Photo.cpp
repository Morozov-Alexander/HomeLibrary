#include "Photo.h"

void Photo::setGenre(std::pair<int, int>* photo_resolution)
{
	this->photo_resolution = photo_resolution;
}

std::pair<int, int>* Photo::getPhotoResolution()
{
	return photo_resolution;
}

void Photo::playMedia()
{
	showPhoto();
}

void Photo::showPhoto()
{
	//функция открывания и показа фотографии
}
