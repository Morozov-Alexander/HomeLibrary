#pragma once
#include "Role.h"
#include "Users.h"
#include "IUserManager.h"
ref class FamilyManagement 
{
public:
	Users^ users;
	void createFamilyMember(System::String^,int, Role, System::String^) override;
	bool deleteFamilyMember(System::String^) override;
	bool transferRights(System::String^) override;
	bool addRestrictions(System::String^) override;
	System::String^ showAllUsers() override;
	bool editFamilyMember(System::String^,int) override;

};

