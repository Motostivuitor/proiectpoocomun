#pragma once
#include<iostream>
#include"Repository.h"
#include"Person.h"
class PersonRepository :public Repository<Person>
{
protected:
	Person* FindByCNP(Person* CNP);
	Person* FindByFullName(Person* LastName);
};