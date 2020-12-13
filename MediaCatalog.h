#pragma once
#include"User.h"
ref class MediaCatalog
{
private:
	System::String^ name;
	System::String^ type;
	System::String^ owner_login;
	System::String^ privacy_type;
public:
	void setName(System::String^ name);
	void setType(System::String^ type);
	void setOwnerLogin(System::String^ owner_login);
	void setPrivacyType(System::String^ privacy_type);

	System::String^ getName();
	System::String^ getType();
	System::String^ getOwnerLogin();
	System::String^ getPrivacyType();


	cliext::vector<System::String^> mediaId;


};
