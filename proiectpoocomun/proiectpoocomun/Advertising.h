#pragma once
#include"Activity.h"
class Advertising :public Activity
{
public:
	enum AdvertisingType
	{
		JOB_FAIRS,
		PRESENTATIONS
	};
	Advertising(AdvertisingType type);
protected:
	AdvertisingType mType;
};