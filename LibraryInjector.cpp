#include "LibraryInjector.h"
#include "UserManagerForm.h"
#include "AuthorizationController.h"
#include "AuthorizationInterface.h"
void LibraryInjector::initialization()
{
	Catalogs catalogs;
	AllMedia all_media;
	Users^ users = gcnew Users();

	User^ user = gcnew User("alex", 123, "alex");

	users->users.push_back(user);

	AuthorizationController^ autorization = gcnew AuthorizationController();
	autorization->users = users;

	FamilyManagement familyManagment;
	familyManagment.users = users;
	HomeLibrary::UserManagerForm^ user_manager_form = gcnew HomeLibrary::UserManagerForm;
	HomeLibrary::AuthorizationForm^ aut_form = gcnew HomeLibrary::AuthorizationForm;
	aut_form->auto_ctr = autorization;
	aut_form->user_manager_form = user_manager_form;
	aut_form->Show();
}

