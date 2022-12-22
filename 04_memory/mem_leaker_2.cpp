#include <cstdio>
#include <iostream>
#include <vector>

void print_array(int* array, int length);

int main(int argc, char **argv) {
	/*
     *	no leak
	 */
	int array1[6] = {3, 1, 4, 1, 5, 9};
	print_array(array1, 6);

	/*
     *	has leak
	 */
	int length = 6;
	int *array2 = (int *)malloc(length*sizeof(int));
	for (int i=0; i<length; i++) {
		array2[i] = length - i - 1; 
	}
	print_array(array2, length);

	// uncomment the line below to fix the leak
	// free(array2);
}

void print_array(int* array, int length) {
	for (int i=0; i<length; i++) {
		std::cout << array[i] << std::endl;
	}
}
