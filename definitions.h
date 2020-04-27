#ifndef _DEFINITIONS_H_
#define _DEFINITIONS_H_

#include <stddef.h>
#include <stdlib.h>

constexpr size_t CLASSROOM_SIZE = 10;

enum class ClassroomType
{
	MATH,
	CS,
	PHYSICS,
	HISTORY,
	ENGLISH,
	BIOLOGY,
};

#define SANITY(cond, desc...)														\
	if (!(cond))																	\
	{																				\
		printf("STOPPED RUNNING (%s:%s:%d) ", __FILE__, __FUNCTION__, __LINE__);	\
		printf(desc);																\
		printf("\n");																\
		fflush(stdout);																\
		abort();																	\
	}

#endif // _DEFINITIONS_H_