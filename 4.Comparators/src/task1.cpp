#include <iostream>
#include "task1.h"

int comp1(const void* one, const void* two) {
	return (*(int*)one > *(int*)two) - (*(int*)two > *(int*)one);
}

int comp2(const void* one, const void* two) {
	return (*(double*)one > * (double*)two) - (*(double*)two > * (double*)one);
}

int comp3(const void* one, const void* two) {
	return (*(*(const char**)one) > * (*(const char**)two)) - (*(*(const char**)two) > * (*(const char**)one));
}

int comp4(const void* one, const void* two) {
	int size1 = strlen(*(const char**)one), size2 = strlen(*(const char**)two);
	return (size1 > size2) - (size2 > size1);
}

int comp5(const void* one, const void* two) {
	int spaces1(0), spaces2(0);
	for (size_t i = 0; *(*(const char**)one + i) != '\0'; i++)
	{
		if ( *(*(const char**)one + i) == ' ') spaces1++;
	}
	for (size_t i = 0; *(*(const char**)two + i) != '\0'; i++)
	{
		if ( *(*(const char**)two + i) == ' ') spaces2++;
	}
	return (spaces1 > spaces2) - (spaces2 > spaces1);
}

int comp6(const void* one, const void* two) {
	return (((Person*)one)->age > ((Person*)two)->age) - (((Person*)two)->age > ((Person*)one)->age);
}