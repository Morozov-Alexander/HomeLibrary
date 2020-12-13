#pragma once
#include "Comment.h"
#include "Rating.h"
ref class MediaController
{
	virtual System::String^ addComment(System::String^, Media^) = 0;
	virtual System::String^ rename(System::String^, Media^) = 0;
	virtual int addRating(int, Media^) = 0;
	virtual void editMedia(System::String^, Media^) = 0;

};

