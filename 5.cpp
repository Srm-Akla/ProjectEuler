/*
Author: Sam Akella

Problem 5:
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

*/
/*
#include <iostream>
#include <stdlib.h>

void division(int n){
    int i=1;
    while(i<=20){
	std::cout << i << " --- " << n/i << "--- " << n%i << std::endl;
	if(n%i != 0){break;}
	i++;
    }
}

int main(){
    int a = 10000000;
    while(true){
	division(a);
	std::cout << "------------------" << std::endl;
	a++;
    }
    return 0;
}
*/


