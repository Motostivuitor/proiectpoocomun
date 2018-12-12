#include "Student.h"
Student::Student()
{
}
Student::Student(int CNP, std::string FirstName, std::string LastName, std::string Email)
	:Person(CNP, FirstName, LastName, Email)
{
}