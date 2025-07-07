#ifndef __BOOK_H__
#define __BOOK_H__

#include <iostream>
#include <string>
#include "author.h"


class Book{
    private: 
        std::string title;
        int year;
        Author author;

    public:
        Book(const std::string& title, int year, const Author& author);

        std::string getTitle() const;
        int getYear() const;
        Author getAuthor() const;

        void setTitle(const std::string& t);
        void setYear(int y);
        void setAuthor(const Author& a);

        void show() const;//this is what killed me. I didn't delete the funciton that was input

};

#endif