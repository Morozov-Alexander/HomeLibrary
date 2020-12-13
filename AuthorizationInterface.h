#pragma once
ref class AuthorizationInterface
{
public:
	virtual bool authorization(System::String^ login, int password) = 0;
};