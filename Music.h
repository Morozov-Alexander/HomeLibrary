#pragma once
#include"Media.h"
ref class Music : public Media
{
private:
	System::String^ author;
	System::String^ genre;


public:
	void setAuthor(System::String^ author);
	void setGenre(System::String^ genre);

	System::String^ getAuthor();
	System::String^ getGenre();


	void playMedia() override;
	void playMusic();
};

