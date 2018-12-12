#include<iostream>
#include"Room.h"
#include"Person.h"
#include"Repository.h"
class Activity
{
protected:
	Room* mRoom;
	Person* mOwner;
public:
	Activity(Room* room, Person* owner);
	Room* GetLocation();
};
