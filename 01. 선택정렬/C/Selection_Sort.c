#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include <stdio.h>

int main()
{
	int i, j, min, idx, temp;
	int arr[10] = { 1,5,6,10,2,9,4,8,7,3 };

	for (i = 0; i < 10; i++) {
		min = 999;
		for (j = i; j < 10; j++) {
			if (min > arr[j]) {
				min = arr[j];
				idx = j;
			}
		}
		temp = arr[i];
		arr[i] = arr[idx];
		arr[idx] = temp;
	}
	for (i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
}

