#pragma once
#include"Media.h"
ref class Photo : public Media
{
private:
	std::pair<int, int>* photo_resolution;

public:
	void setGenre(std::pair<int, int>* photo_resolution);

	std::pair<int, int>* getPhotoResolution();


	void playMedia() override;
	void showPhoto();
};

