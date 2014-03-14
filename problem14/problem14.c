#include <stdio.h>

unsigned long gerade(unsigned long);
unsigned long ungerade(unsigned long);

int main(void){

	unsigned long start = 1;
	int counter = 0;
	int longestChain = 0;
	unsigned long startNrLongest = 0;
	unsigned long step = 0;

	do{
		start++;
		step = start;
		do{
			if(step % 2 == 0) {
				step = gerade(step);
			} else {
				step = ungerade(step); 
			}
	
			counter++;

		} while(step != 1);
		
			if(counter > longestChain){
				longestChain = counter;
				startNrLongest = start;
			} else {
				
				if(start % 1000 == 0){
					printf("start = %ld, chain = %d\n",start, counter);
				}

			}
			counter = 0;

	} while(start < 1000000);


	printf("Die längste Kette hat %d glieder und beginnt mit nummer %ld\n", longestChain, startNrLongest);
	return 0;
}

unsigned long gerade(unsigned long zahl){
	return zahl/2;
}

unsigned long ungerade(unsigned long zahl){
	return (zahl*3)+1;
}


