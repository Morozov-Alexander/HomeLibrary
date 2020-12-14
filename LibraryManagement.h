#pragma once
#include "CatalogsControler.h"
#include "FamilyManagement.h"
#include "CatalogManager.h"

ref class LibraryManagement
{
public:
	CatalogsControler^ cat_cont;
	FamilyManagement^ fm;
	CatalogManager^ cat;

};

