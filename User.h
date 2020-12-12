#pragma once
#include <string>
#include "Role.h"
ref class User
{
private:
	System::String^ name;
	System::String^ surname;
	int password;
	System::String^ login;
	Role role;
public:
	System::String^ getName();
	void setName(System::String^);
	void setSurName(System::String^);
	System::String^ getSurName();
	void setPassword(int);
	void setLogin(System::String^);
	void setRole(Role);
	Role getRole(Role);
};

