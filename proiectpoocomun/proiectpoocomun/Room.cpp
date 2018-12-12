#include "Room.h"
Room::Room(std::string Name="")
	:mName(Name)
{}
std::string Room::GetName()const
{
	return mName;
}