#pragma once
#include <iostream>

class Role {
public:
	enum RoleType
	{
		STUDENT_ROLE,
		TEACHER_ROLE,
		ADMINISTRATIVE_ROLE
	};
	Role(RoleType type);
protected:
	RoleType mtype;
};