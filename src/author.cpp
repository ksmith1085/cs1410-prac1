#include "author.h"



Author::Author(const std::string& name, const std::string& nationality): name(name), nationality(nationality){}
//const makes it so the attachments aren't modifiable 
//the above are constructs 

std::string Author::getName() const {return name;}
std::string Author::getNationality() const {return nationality;}
//getters because of the starter of get

void Author::setName(const std::string& name){this->name = name;}
void Author::setNationality(const std::string& nat){nationality = nat;}
