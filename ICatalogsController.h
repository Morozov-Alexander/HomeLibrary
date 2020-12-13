#pragma once
#include "MediaCatalog.h"
ref class ICatalogsController
{
	virtual System::String^ editCatalog(System::String^) = 0;
	virtual bool deleteCatalog(System::String^) = 0;
	virtual MediaCatalog^ createCatalog(System::String^) = 0;
};
