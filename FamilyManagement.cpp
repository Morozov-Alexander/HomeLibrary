#include "FamilyManagement.h"

void FamilyManagement::createFamilyMember(System::String^ name, int password, Role role, System::String^ login)
{
	User^ new_user = gcnew User(name, password, login, role);
	users->users.push_back(new_user);
	showAllUsers();
}

bool FamilyManagement::deleteFamilyMember(System::String^ login)
{
	return false;
}

bool FamilyManagement::transferRights(System::String^ login)
{
	return false;
}

bool FamilyManagement::addRestrictions(System::String^ login)
{
	return false;
}

System::String^ FamilyManagement::showAllUsers()
{
	System::Console::WriteLine(users->users.size());
	return "ok";
}

bool FamilyManagement::editFamilyMember(System::String^ name, int password)
{
	return false;
}
