#pragma once
#include<iostream>
#include"Repository.h"
#include"Activity.h"
class ActivityRepository :public Repository<Activity>
{
protected:
	Activity* FindByLocation(Room* room);
};
