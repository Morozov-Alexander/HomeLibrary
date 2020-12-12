#pragma once
#include "Role.h"
#include "Restriction.h"
#include <cliext/vector>

ref class User
{
private:
	System::String^ name;
	System::String^ surname;
	int password;
	System::String^ login;
	Role role;
	cliext::vector<Restriction^> restrictions;

public:

	System::String^ getName();
	void setName(System::String^);
	void setSurName(System::String^);
	System::String^ getSurName();
	void setPassword(int);
	void setLogin(System::String^);
	void setRole(Role);
	Role getRole(Role);

	void addRestrictions(Restriction^);
	cliext::vector<Restriction^> getRestrictions();
};

