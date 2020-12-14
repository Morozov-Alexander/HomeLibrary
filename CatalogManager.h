#pragma once
#include "ICataloCont.h"
#include "MediaLoader.h"
#include "MediaControler.h"

ref class CatalogManager //: public ICataloCont
{
public:
	AllMedia^ all_media;
	void deleteMedia(Media^ media) override {
		//all_media->allMedia.erase(media);
		media->~Media(); //Удаление медии
	}
	Media^ downloadMedia(System::String^) override {
		return gcnew Media();
	}
	void editMedia(Media^media , System::String^) override {
		// изменение полей медии
		// данные берутся из строки и меняются поля в медии 
		//сохраняется медия

	}
	void showMedia(Media^ media) override {
		// воспроизведение медии
	}
};

