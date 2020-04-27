#ifndef CLASSROOM_H
#define CLASSROOM_H

#include <stddef.h>

#include "definitions.h"
#include "student.h"

class Classroom
{
public:
	Classroom(ClassroomType class_subjet);

	bool Study();

	bool AddStudent(Student& student);

private:
	Student m_students[CLASSROOM_SIZE] {};

	size_t m_num_of_students;

	ClassroomType m_class_subject;
};

#endif // CLASSROOM_H