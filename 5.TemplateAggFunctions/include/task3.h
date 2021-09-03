#ifndef TASK3_H
#define TASK3_H

template <typename T, int length>
 T minArr(T (&arr)[length]) {
	 T min = 100000;
	for (T it : arr)
	{
		if (it < min) min = it;
	}
	return min;
}

#endif
