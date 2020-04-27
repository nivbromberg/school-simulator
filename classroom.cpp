#include "classroom.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

Classroom::Classroom(ClassroomType class_subject):
	m_class_subject(class_subject),
	m_num_of_students(0)
{
	srandom(time(nullptr));
}

bool Classroom::Study()
{
	for (size_t i = 0; i < m_num_of_students; i++)
	{
		if (m_students[i].Study(m_class_subject) == false)
		{
			return false;
		}
	}

	return true;
}

bool Classroom::AddStudent(Student& student)
{
	if (m_num_of_students == CLASSROOM_SIZE)
	{
		printf("Class is full\n");
		return false;
	}

	m_students[m_num_of_students] = student;
	m_num_of_students++;

	return true;
}
