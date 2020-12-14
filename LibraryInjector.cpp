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
#include "CreateUserForm.h"

#include "AddRestrictionsFoem.h"
#include "ChangeRoleForm.h"
#include "DeleteFamilyMemberForm.h"

void LibraryInjector::initialization()
{
	Catalogs^ catalogs;
	AllMedia^ all_media;
	Users^ users = gcnew Users();

	User^ user = gcnew User("alex", 123, "alex", Role(FAMILY_MEMBER));
	User ^ user_1 = gcnew User("max", 1234, "Latish", Role(FAMILY_MEMBER));
	User^ user_2 = gcnew User("root", 0, "root", Role(HAD_OF_FAMILY));


	users->users.push_back(user);
	users->users.push_back(user_1);
	users->users.push_back(user_2);


	AuthorizationController^ autorization = gcnew AuthorizationController();
	autorization->users = users;

	FamilyManagement^ familyManagment =  gcnew FamilyManagement();
	familyManagment->users = users;

	HomeLibrary::MainMenuForm^ manager_form = gcnew HomeLibrary::MainMenuForm;
	HomeLibrary::MainUserForm^ user_form = gcnew HomeLibrary::MainUserForm;

	HomeLibrary::AuthorizationForm^ aut_form = gcnew HomeLibrary::AuthorizationForm;

	aut_form->auto_ctr = autorization;
	aut_form->user_manager_form = manager_form;
	aut_form->user_main_form = user_form;

	LibraryManagement^ lib_manager = gcnew LibraryManagement();

	CatalogManager^ c_manager = gcnew CatalogManager();
	CatalogsControler^ cat_manager = gcnew CatalogsControler();

	lib_manager->fm = familyManagment;
	lib_manager->cat_cont = cat_manager;
	lib_manager->cat = c_manager;
	lib_manager->cat_cont->catalogs = catalogs;
	lib_manager->cat->all_media = all_media;

	HomeLibrary::CreateUserForm^ create_user = gcnew HomeLibrary::CreateUserForm;
	create_user->lib_manager = lib_manager;

	HomeLibrary::AddRestrictionsFoem^ rest_form = gcnew HomeLibrary::AddRestrictionsFoem;
	HomeLibrary::ChangeRoleForm^ ch_role_form = gcnew HomeLibrary::ChangeRoleForm;
	HomeLibrary::DeleteFamilyMemberForm^ del_fm_member = gcnew HomeLibrary::DeleteFamilyMemberForm;
	rest_form->lib_manager = lib_manager;
	ch_role_form->lib_manager = lib_manager;
	del_fm_member->lib_manager = lib_manager;

	HomeLibrary::UserManagerForm^ um = gcnew HomeLibrary::UserManagerForm;
	
	um->lib_manager = lib_manager;
	um->create_user = create_user;
	um->rest_form = rest_form;
	um->ch_role_form = ch_role_form;
	um->del_fm_member = del_fm_member;

	manager_form->um = um;
	user_form->um = um;

	


	aut_form->Show();
}

