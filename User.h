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
	User(System::String^ name, int password, System::String^ login){
		this->name = name;
		this->password = password;
		this->login = login;
	}

	User(System::String^ name, int password, System::String^ login, Role role) {
		this->name = name;
		this->password = password;
		this->login = login;
		this->role = role;
	}

	System::String^ getName();
	void setName(System::String^ name);
	void setSurName(System::String^);
	System::String^ getSurName();
	void setPassword(int);
	void setLogin(System::String^);
	System::String^ getLogin();
	int getPassword();
	void setRole(Role)
	{
		this->role = role;
	}
	Role getRole()
	{
		return	role;
	}

	void addRestrictions(Restriction^);
	cliext::vector<Restriction^> getRestrictions();
};

