#include"pch.h"
#include"PersonRepository.h"
Person* PersonRepository::FindByCNP(Person* CNP)
{
	for (int i = 0; i < mEntities.size(); i++)
	{
		if (mEntities[i]->GetCNP() == CNP)
			return mEntities[i];
	}
	return NULL;
}
Person* PersonRepository::FindByFullName(Person* LastName)
{
	for (int i = 0; i < mEntities.size(); i++)
	{
		if (mEntities[i]->GetLastName() == LastName)
			return mEntities[i];
	}
	return NULL;
}