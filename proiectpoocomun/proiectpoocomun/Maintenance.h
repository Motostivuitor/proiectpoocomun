#pragma once
#include"Activity.h"
class Maintenance :public Activity
{
public:
	enum MaintenanceType
	{
		SOFTWARE_INSTALLATION,
		RENOVATIONS
	};
	Maintenance(MaintenanceType type);
protected:
	MaintenanceType mType;
};
