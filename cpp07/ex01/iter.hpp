#pragma once

template <typename T>
void iter(T *arr, int size, void (*func)(T const &arr))
{
	for(int i = 0; i < size; i++){
		func(arr[i]);
	}
}
