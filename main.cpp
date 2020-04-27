#include <stdio.h>

#include "definitions.h"
#include "classroom.h"
#include "student.h"

int main()
{
	ClassroomType class_id = ClassroomType::MATH;
	Classroom classroom(class_id);

	Student s1(1), s2(2), s3(3);

	SANITY(classroom.AddStudent(s1), "Failed to add a student to the classroom");
	SANITY(classroom.AddStudent(s2), "Failed to add a student to the classroom");
	SANITY(classroom.AddStudent(s3), "Failed to add a student to the classroom");

	classroom.Study();

	return 0;
}
