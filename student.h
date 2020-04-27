#ifndef STUDENT_H
#define STUDENT_H

#include <stddef.h>

#include "definitions.h"

class Student
{
public:
	using student_id_t = size_t;

	Student() = default;

	Student(student_id_t id);

	void Procrastinate();

	bool Study(ClassroomType class_id);

private:
	student_id_t m_id;
};

#endif // STUDENT_H