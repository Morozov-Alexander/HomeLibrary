#pragma once
#include "Users.h"
#include "AuthorizationInterface.h"
ref class AuthorizationController : public AuthorizationInterface
{
public:
	Users^ users;
	bool authorization(System::String^ login,int password) override;
private:
	User^ checkLogin(System::String^ login);
	bool checkPassword(User^ user,int password);


};

