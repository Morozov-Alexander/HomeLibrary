#pragma once
#include "IMediaLoader.h"
#include "AllMedia.h"
ref class MediaLoader : public IMediaLoader
{
public:
	AllMedia^ allmedia;

	Media^ loadFile(System::String^ path, System::String^ file_name) override {
		//������� �������� ����� ������������ � �������
		return gcnew Media;
	}
	System::String^ findFileForLoading(System::String^ file_name) override {
		// ������� ������ ����� ������������ �� ��� ����������
		return "file path";
	}

	void addMediaToList(Media^ media) {
		allmedia->allMedia.push_back(media);
	}
};

