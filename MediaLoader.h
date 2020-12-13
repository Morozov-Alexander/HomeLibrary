#pragma once
#include "IMediaLoader.h"
#include "AllMedia.h"
ref class MediaLoader : public IMediaLoader
{
public:
	AllMedia^ allmedia;

	Media^ loadFile(System::String^ path, System::String^ file_name) override {
		//Функция загрузки файла пользователя с системы
		return gcnew Media;
	}
	System::String^ findFileForLoading(System::String^ file_name) override {
		// функция поиска файла пользователя на его устройстве
		return "file path";
	}

	void addMediaToList(Media^ media) {
		allmedia->allMedia.push_back(media);
	}
};

