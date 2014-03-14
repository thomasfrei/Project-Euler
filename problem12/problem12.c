#include <stdio.h>
#include <math.h>

int countDivisor(unsigned long long);

int main(void){

	unsigned long long triangleNr = 1;	
	unsigned long long temp = 2;
	int counter = 0; 
	int counter2 = 0; 

	do{

		triangleNr += temp++;
		counter2++;
		counter = countDivisor(triangleNr);
		
		if(counter2 % 100 == 0) {
			printf("TriangleNr %llu hat %d Divisoren.\n", triangleNr, counter);
		}

	} while (counter <= 500);
	
	printf("Die zahl %llu hat %d divisoren\n", triangleNr, counter);	

	return 0;
}

int countDivisor(unsigned long long int n) {

	unsigned long long i = 0;
	int counter =0;

	for (i = 1; i <= (int) sqrt(n); i++){

		if (n % i == 0) {
			counter = counter + 2;
		}
	}
	return counter;
}