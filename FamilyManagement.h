#pragma once
#include "Role.h"
#include "Users.h"
#include "IUserManager.h"
ref class FamilyManagement : public IUserManager
{
public:
	Users^ users;
	void createFamilyMember(System::String^,int, Role, System::String^, System::String^);
	bool deleteFamilyMember(System::String^);
	bool transferRights(System::String^);
	bool addRestrictions(System::String^);
	System::String^ showAllUsers();
	bool editFamilyMember(System::String^,int);

};

