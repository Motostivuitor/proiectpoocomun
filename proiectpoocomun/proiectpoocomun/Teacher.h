#include "Person.h"

class Teacher :public Person
{
	Teacher();
	Teacher(int CNP = 0, std::string FirstName = "", std::string LastName = "", std::string Email = "");
};