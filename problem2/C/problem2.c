#include <stdio.h>

#ifndef LIMIT
#define LIMIT 4000000
#endif

void main(void){

	int x = 1;
	int y = 2;
	int sum = 0;
	int temp = 0;

	do{
		if (y % 2 == 0) {
			sum += y;
		}

		temp = x+y;
		x = y;
		y = temp;
	} while (temp < LIMIT);

	printf("Result = %d\n",sum );
}