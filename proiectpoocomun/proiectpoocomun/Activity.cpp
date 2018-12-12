#include"Activity.h"
Activity::Activity(Room* room, Person* owner)
	:mRoom(room),
	mOwner(owner)
{}

Room * Activity::GetLocation()
{
	return mRoom;
}
