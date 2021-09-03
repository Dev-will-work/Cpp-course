#ifndef TASK2_H
#define TASK2_H

template <typename T, typename P>
T averageArr(P arr, T size) {
	T sum = *arr;
	for (size_t i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	sum /= size;
	return sum;
}

#endif