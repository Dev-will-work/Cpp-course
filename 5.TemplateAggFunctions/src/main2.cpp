#include <iostream>
#include "task2.h"

int main() {
	const size_t n = 6;
	int arr[n]{ 4, 3, 2, 2, 2, -1 };
	int result = averageArr(arr, n);
	std::cout << result;
}