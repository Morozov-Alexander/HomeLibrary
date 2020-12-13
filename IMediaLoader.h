#pragma once
#include "Media.h"
ref class IMediaLoader
{
public:
	virtual Media^ loadFile(System::String^ path, System::String^ file_name) = 0;
	virtual System::String^ findFileForLoading(System::String^ file_name) = 0;
};
