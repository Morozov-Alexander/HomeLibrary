#pragma once
#include"Media.h"
ref class Film :public Media
{
private:
	System::String^ description;
	System::String^ genre;


public:
	void setDescription(System::String^ description);
	void setGenre(System::String^ genre);

	System::String^ getDescription();
	System::String^ getGenre();


	void playMedia() override;
	void playFilm();

};

