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
		media->~Media(); //�������� �����
	}
	Media^ downloadMedia(System::String^) override {
		return gcnew Media();
	}
	void editMedia(Media^media , System::String^) override {
		// ��������� ����� �����
		// ������ ������� �� ������ � �������� ���� � ����� 
		//����������� �����

	}
	void showMedia(Media^ media) override {
		// ��������������� �����
	}
};

