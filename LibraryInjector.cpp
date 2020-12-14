#include "LibraryInjector.h"
#include "UserManagerForm.h"
#include "AuthorizationController.h"
#include "AuthorizationInterface.h"
#include "MainMenuForm.h"
#include "Role.h"
#include "LibraryManagement.h"
#include "CatalogsControler.h"
#include "FamilyManagement.h"
#include "CatalogManager.h"
void LibraryInjector::initialization()
{
	Catalogs catalogs;
	AllMedia all_media;
	Users^ users = gcnew Users();

	User^ user = gcnew User("alex", 123, "alex", Role(FAMILY_MEMBER));
	User ^ user_1 = gcnew User("max", 1234, "Latish", Role(FAMILY_MEMBER));
	User^ user_2 = gcnew User("root", 0, "root", Role(HAD_OF_FAMILY));


	users->users.push_back(user);
	users->users.push_back(user_1);
	users->users.push_back(user_2);


	AuthorizationController^ autorization = gcnew AuthorizationController();
	autorization->users = users;

	FamilyManagement familyManagment;
	familyManagment.users = users;

	HomeLibrary::MainMenuForm^manager_form = gcnew HomeLibrary::MainMenuForm;
	HomeLibrary::MainUserForm^ user_form = gcnew HomeLibrary::MainUserForm;
	HomeLibrary::AuthorizationForm^ aut_form = gcnew HomeLibrary::AuthorizationForm;

	aut_form->auto_ctr = autorization;
	aut_form->user_manager_form = manager_form;
	aut_form->user_main_form = user_form;

	LibraryManagement^ lib_manager = gcnew LibraryManagement();

	CatalogManager^ c_manager = gcnew CatalogManager();
	FamilyManagement^ fm_manager = gcnew FamilyManagement();
	CatalogsControler^ cat_manager = gcnew CatalogsControler();



	aut_form->Show();
}

