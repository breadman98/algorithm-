#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include <stdio.h>


int main()
{
	int i, j, temp;
	int arr[10] = { 10,5,8,2,3,9,1,4,6,7 };
	int length = sizeof(arr) / sizeof(int);

	for (i = 0; i < length; i++) {
		for (j = 0; j < length -1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (i = 0; i < length; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}


