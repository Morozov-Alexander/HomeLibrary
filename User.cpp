#include "User.h"

System::String^ User::getName()
{
	return name;
}

void User::setName(System::String^ name)
{
	this->name = gcnew System::String(name);
}

void User::setSurName(System::String^ surname)
{
	this->surname = surname;
}

System::String^ User::getSurName()
{
	return this->surname;
}

void User::setPassword(int password)
{
	this->password = password;
}

 void User::setLogin(System::String ^ login)
{
	this->login = login;
}

 System::String^ User::getLogin()
 {
	 return login;
 }

 int User::getPassword()
 {
	 return password;
 }

 void User::setRole(Role role)
{
	this->role = role;
}

 Role User::getRole(Role)
{
	return	role;
}

 void User::addRestrictions(Restriction^ restr)
 {
	 restrictions.push_back(restr);
 }

 cliext::vector<Restriction^> User::getRestrictions()
 {
	 return restrictions;
 }
