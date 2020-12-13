#include "FamilyManagement.h"

void FamilyManagement::createFamilyMember(System::String^ name, int password, Role role, System::String^ login, System::String^ surname)
{
	throw gcnew System::NotImplementedException();
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
	throw gcnew System::NotImplementedException();
	// TODO: вставьте здесь оператор return
}

bool FamilyManagement::editFamilyMember(System::String^ name, int password)
{
	return false;
}
