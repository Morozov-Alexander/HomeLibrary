#pragma once
#include "IMediaController.h"
#include "AllMedia.h"
ref class MediaControler
{
	
	 System::String^ addComment(System::String^ ,Media^) override;
	 System::String^ rename(System::String^, Media^) override;
	 int addRating(int, Media^) override;
	 void editMedia(System::String^, Media^) override;
};

