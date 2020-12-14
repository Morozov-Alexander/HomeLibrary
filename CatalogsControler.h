#pragma once
#include "ICatalogsController.h"
#include "Catalogs.h"
ref class CatalogsControler //: public ICatalogsController
{ public:
	Catalogs^ catalogs;
	System::String^ editCatalog(System::String^ name) override {
		return name;
	}
	bool deleteCatalog(System::String^) override {
		return 0;
	}
	MediaCatalog^ createCatalog(System::String^ name) override {
		return catalogs->media_catalog[0];
	}
	System::String^ showCatalog(System::String^ name) override {
		return name;

	}
	System::String^ addPrivacy(System::String^ nam,bool) override {
		return nam;
	}
	System::String^ deletePrivacy(System::String^ nam) override {
		return nam;

	}
	System::String^ changePrivacy(System::String^ nam,bool) {
		return nam;

	}
};

