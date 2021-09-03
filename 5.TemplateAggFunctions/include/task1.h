#ifndef TASK1_H
#define TASK1_H
#include <cstring>

template <typename T>
bool less(T first, T second) {
	return first < second;
}
template<> bool less<const char*>(const char* a, const char* b)
{
	return strcmp(a, b) < 0;
}

#endif
