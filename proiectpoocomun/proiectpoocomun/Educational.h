#pragma once
#include"Activity.h"
class Educational :public Activity
{
public:
	enum EducationalType
	{
		COURSES,
		LABORATORIES,
		SEMINARS
	};
	Educational(EducationalType type);
protected:
	EducationalType mType;
};