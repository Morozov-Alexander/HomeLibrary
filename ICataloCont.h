#pragma once
#include "Media.h"
ref class ICataloCont
{
	virtual void deleteMedia(Media^) = 0;
	virtual Media^ downloadMedia(System::String^) = 0;
	virtual void editMedia(Media^, System::String^) = 0;
	virtual void showMedia(Media^) = 0;
};
