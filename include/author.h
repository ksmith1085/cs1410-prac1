#ifndef __AUTHOR_H__
#define __AUTHOR_H__

#include <iostream>
#include <string>


class Author{
    private:
        std::string name, nationality; 

    public:
        Author(const std::string& name, const std::string& nationality);
        //const makes it so the attachments aren't modifiable 
        //the above are constructs 

        std::string getName() const;
        std::string getNationality() const;
        //getters because of the starter of get

        void setName(const std::string& name);
        void setNationality(const std::string& nat);

};

#endif