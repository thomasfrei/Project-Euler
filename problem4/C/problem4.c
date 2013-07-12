#include <stdio.h>

void main(void){

    int a = 999;
    int b = 999;
    int temp = 0;
    int number = 0;

    for (a = 999; a > 99; --a){
        for (b= 999; b > 99; --b){
            temp = a * b;

            if (temp == reverseNumber(temp)){
                if(temp > number){
                    number = temp;
                }
            }
        }
    }
    printf("Result = %d\n",number );
}

/**
 * Reverses a Number
 * @param  number  The number to reverse
 * @return  The reversed number
 */
int reverseNumber(int number){
    int reverse = 0 , remain = 0;

    do{
        remain =  (number % 10);
        reverse = reverse * 10 + remain;
        number = number /10;
    } while(number > 0);

    return reverse;
}