#include "FamilyManagement.h"

void FamilyManagement::createFamilyMember(System::String^ name, int password, Role role, System::String^ login)
{
	User^ new_user = gcnew User(name, password, login, role);
	users->users.push_back(new_user);
	showAllUsers();
}

bool FamilyManagement::deleteFamilyMember(System::String^ login)
{
	for (int i = 0; i < users->users.size(); i++) {
		if (users->users[i]->getLogin() == login)
			users->users[i]->~User();
		return true;
	}
	return false;
}

bool FamilyManagement::transferRights(System::String^ login)
{
	for (int i = 0; i < users->users.size(); i++) {
		if (users->users[i]->getLogin() == login) {

			for (int j = 0; j < users->users.size(); j++) {
				if(users->users[j]->getRole() ==(Role(HAD_OF_FAMILY)))
					users->users[j]->setRole(Role(FAMILY_MEMBER));
			}
			users->users[i]->setRole(Role(HAD_OF_FAMILY));
			return true;
		}
	}
	return false;
}

bool FamilyManagement::addRestrictions(System::String^ login)
{
	for (int i = 0; i < users->users.size(); i++) {
		if (users->users[i]->getLogin() == login)
			users->users[i]->addRestrictions(gcnew Restriction());
		return true;
	}
	return false;
}

System::String^ FamilyManagement::showAllUsers()
{
	System::String^ users_names = "";
	for (int i = 0; i < users->users.size(); i++) {
		users_names += (users->users[i]->getName());
	}
	return users_names;
}

bool FamilyManagement::editFamilyMember(System::String^ name, int password)
{
	for (int i = 0; i < users->users.size(); i++) {
		if (users->users[i]->getName() == name)
			users->users[i]->setPassword(password);
		return true;
	}
	return false;
}
