#include <stdio.h>
#define SIZE 10

void bubble_sort(int a[], size_t size);

int main(void) {
	int a[SIZE] = {2, 6, 4, 8, 10, 89, 68, 45, 37};
	
	puts("Data items in original order");

	for (size_t i = 0; i < SIZE; ++i) {
		printf("%4d", a[i]);
		printf("\taddress: %4p\n", &a[i]); 
	}


	bubble_sort(a, SIZE);

	puts("\nData items in ascending order");

	for (size_t i = 0; i < SIZE; ++i) {
		printf("%4d", a[i]);
	}

	puts("");
}

void bubble_sort(int a[], size_t size) {

	puts("\nThe array passed to bubble_sort: \n");

	for (size_t i = 0; i < SIZE; ++i) {
		printf("%4d", a[i]);
		printf("\taddress: %4p\n", &a[i]);
	}
	
	void swap(int a[], int element_one, int element_two); // function prototype

	for (unsigned int pass = 0; pass < size - 1; ++pass) {
		
		for (size_t j = 0; j < size - 1; ++j) {
			if (a[j] > a[j + 1]) {
				swap(a, j, j + 1);
			}	
		}
	}
	
}

void swap(int array[], int element_one, int element_two) {
	
	puts("");
	for (size_t i = 0; i < SIZE; ++i) {
		printf("%4d", array[i]);		
		printf("\taddress: %4p\n", &array[i]);
	}
	puts("");

	int hold = array[element_one];
	array[element_one] = array[element_two];
	array[element_two] = hold;
}

