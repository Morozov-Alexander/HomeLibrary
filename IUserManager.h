#pragma once
#include "Role.h"
ref class IUserManager
{
	virtual void createFamilyMember(System::String^, int, Role, System::String^, System::String^) = 0;
	virtual bool deleteFamilyMember(System::String^) = 0;
	virtual bool transferRights(System::String^) = 0;
	virtual bool addRestrictions(System::String^) = 0;
	virtual System::String^ showAllUsers() = 0;
	virtual bool editFamilyMember(System::String^, int) = 0;
};