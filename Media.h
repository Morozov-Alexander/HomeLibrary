#pragma once
#include"Rating.h"
#include"Comment.h"
#include <cliext/vector>
ref class Media
{
private:
	System::String^ id;
	System::String^ name;
	System::String^ date;
	System::String^ file;


public:
	void setId(System::String^ id);
	void setName(System::String^ name);
	void setDate(System::String^ date);
	void setfile(System::String^ file);

	System::String^ getId();
	System::String^ getName();
	System::String^ getDate();
	System::String^ getfile();


	cliext::vector<Rating^> rating;
	cliext::vector<Comment^> comments;

	virtual void playMedia() {};




};

