#include "Teacher.h"
Teacher::Teacher()
{
}
Teacher::Teacher(int CNP, std::string FirstName, std::string LastName, std::string Email)
	:Person(CNP, FirstName, LastName, Email)
{
}