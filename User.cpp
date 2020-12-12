#include "User.h"

System::String^ User::getName()
{
	return name;
}

void User::setName(System::String^ name)
{
	this->name = name;
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

 void User::setRole(Role role)
{
	this->role = role;
}

 Role User::getRole(Role)
{
	return	role;
}

 void User::addRestrictions(Restriction restr)
 {
	 this->restrictions->push_back(restr);
 }

 std::vector<Restriction>* User::getRestrictions()
 {
	 return this->restrictions;
 }
