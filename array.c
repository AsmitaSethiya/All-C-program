#include <stdio.h>


int main() {

	long scoresOne[5] = { 930, 903, 785, 760, 701 };

	// Modify elements of array .
	scoresOne[1] = 960;
	scoresOne[4] = 700;

	// Print all elements using a  for loop.
	for (int i = 0; i < 5; i++) {
		printf("%ld\n", scoresOne[i]);
	}

	// User input.
	long scoresTwo[5];

	for (int i = 0; i < 5; i++) {
		printf("Enter the value for index %d:", i);
		scanf("%ld", &scoresTwo[i]);
	}

	puts("Printing elements of scoresTwo: ");
	for (int i = 0; i < 5; i++) {
		printf("%ld\n", scoresTwo[i]);
	}

	return 0;
}
