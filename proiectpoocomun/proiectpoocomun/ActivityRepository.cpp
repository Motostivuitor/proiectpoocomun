#include"pch.h"
#include"ActivityRepository.h"
Activity*ActivityRepository:: FindByLocation(Room* room)
{
	for (int i = 0; i < mEntities.size(); i++)
	{
		if (mEntities[i]->GetLocation() == room)
			return mEntities[i];
	}
	return NULL;
}