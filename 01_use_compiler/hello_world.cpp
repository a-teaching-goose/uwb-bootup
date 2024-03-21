#include <iostream>

int main(int argc, char **argv) {
	int array[] = {1, 2, 3, 4, 5};
	for (int i=0; i<5; i++) {
		array[i]*=2;
		printf("%d\n", array[i]);
	}

}
