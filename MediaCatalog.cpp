#include "MediaCatalog.h"

void MediaCatalog::setName(System::String^ name)
{
    this->name = name;
}

void MediaCatalog::setType(System::String^ type)
{
    this->type = type;
}

void MediaCatalog::setOwnerLogin(System::String^ owner_login)
{
    this->owner_login = owner_login;
}

void MediaCatalog::setPrivacyType(System::String^ privacy_type)
{
    this->privacy_type = privacy_type;
}

System::String^ MediaCatalog::getName()
{
    return name;
}

System::String^ MediaCatalog::getType()
{
    return type;

}

System::String^ MediaCatalog::getOwnerLogin()
{
    return owner_login;

}

System::String^ MediaCatalog::getPrivacyType()
{
    return privacy_type;

}
