#include <iostream>

class Room 
{
protected:
	std::string mName;
public:
	Room(std::string Name = "");
	std::string GetName()const;
};