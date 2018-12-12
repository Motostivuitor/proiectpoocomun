#pragma once
#include <string>
class Person
{
public:
	Person();
	Person(int CNP = 0, std::string FirstName = "", std::string LastName = "", std::string Email = "");
	int GetCNP()const;
	std::string GetFirstName()const;
	std::string GetLastName()const;
	std::string GetEmail()const;
	void SetCNP(int CNP);
	void SetFirstName(std::string FirstName);
	void SetLastName(std::string LastName);
	void SetEmail(std::string Email);
	friend std::istream&operator>>(std::istream& in, Person &p);
	friend std::ostream&operator<<(std::ostream& out, const Person& p);
protected:
	int mCNP;
	std::string mFirstName, mLastName, mEmail;
};