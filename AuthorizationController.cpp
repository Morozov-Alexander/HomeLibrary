#include "AuthorizationController.h"
int AuthorizationController::authorization(System::String^ login, int password)
{
	User^ find_user = checkLogin(login);
	if (find_user) {
		bool check = checkPassword(find_user, password);

		if (check && find_user->getRole() == Role(HAD_OF_FAMILY))
			return 1;
		if (check && find_user->getRole() != Role(HAD_OF_FAMILY))
			return 2;
	}
	return 0;
}

User^ AuthorizationController::checkLogin(System::String^ login)
{
	for (int i = 0; i < users->users.size(); i++)
	{
		if (users->users[i]->getLogin() == login)
			return users->users[i];
	}
	return nullptr;
}

bool AuthorizationController::checkPassword(User^ find_user,int password)
{
	if (find_user->getPassword() == password) return true;
	return false;
}
