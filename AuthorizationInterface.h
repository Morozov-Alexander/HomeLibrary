#pragma once
ref class AuthorizationInterface
{
public:
	virtual int authorization(System::String^ login, int password) = 0;
};