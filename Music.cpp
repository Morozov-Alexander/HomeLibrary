#include "Music.h"

void Music::setAuthor(System::String^ author)
{
    this->author = author;
}

void Music::setGenre(System::String^ genre)
{
    this->genre = genre;
}

System::String^ Music::getAuthor()
{
    return author;
}

System::String^ Music::getGenre()
{
    return genre;
}

void Music::playMedia()
{
    playMusic();
}

void Music::playMusic()
{
    // функция запуска песни
}
