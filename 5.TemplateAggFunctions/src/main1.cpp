#include <iostream>
#include "task1.h"

int main() {
	int a(5), b(6);
	char x('a'), y('b');
	const char* one("abba"), *two("baab");
	bool result = less(two, one);
	std::cout << result;
}