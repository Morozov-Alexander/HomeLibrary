#pragma once
#include "User.h"
#include "cliext/vector"
ref class Users
{
public:
	Users() {
		users = gcnew cliext::vector<User^>;
	}
	cliext::vector<User^> users;
	cliext::vector<User^> getUsers();
};

