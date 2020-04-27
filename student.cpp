#include "student.h"

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#include "definitions.h"

Student::Student(student_id_t id): m_id(id)
{
}

void Student::Procrastinate()
{
	for (int i = 0; i < 3; i++)
	{
		printf("Z");
		fflush(stdout);
		sleep(1);
	}

	printf("\n");
}

bool Student::Study(ClassroomType /* class_id */)
{
	if (random() % 3 == 0)
	{
		this->Procrastinate();
		return false;
	}

	printf("Studying...\n");
	return true;
}
