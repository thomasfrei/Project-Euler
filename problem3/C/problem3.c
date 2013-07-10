#include <stdio.h>

void main(void	){

	long number = 600851475143;		// The number to test
	int factor = 2;					// the largest factor

	// Remove all factors of 2
	while (number % factor == 0){
		number = number / factor;
	}

	// Remove factors of 3
	factor = 3;
	while(number != 1){
		while(number % factor == 0){
			number = number /factor;
		}

		if (number != 1)
			factor += 2;
	}
	printf("Largest Factor = %d\n",factor );
}