#include "Person.h"
Person()
{

}
Person::Person(int CNP, std::string FirstName, std::string LastName, std::string Email)
	:mCNP(CNP),
	mFirstName(FirstName),
	mLastName(LastName),
	mEmail(Email)
{
}
int Person::GetCNP()const
{
	return mCNP;
}
std::string Person::GetFirstName()const
{
	return mFirstName;
}
std::string Person::GetLastName()const
{
	return mLastName;
}
std::string Person::GetEmail()const
{
	return mEmail;
}
void Person::SetCNP(int CNP)
{
	mCNP = CNP;
}
void Person::SetFirstName(std::string FirstName)
{
	mFirstName = FirstName;
}
void Person::SetLastName(std::string LastName)
{
	mLastName = LastName;
}
void Person::SetEmail(std::string Email)
{
	mEmail = Email;
}
std::istream & operator>>(std::istream & in, Person & p)
{
	in >> p;
	return in;
}
std::ostream & operator<<(std::ostream & out, const Person & p)
{
	out << p;
	return out;
}