/*
 * Author: Sriram Akella
 *
 * Problem 4:
 * A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
 * Find the largest palindrome made from the product of two 3-digit numbers.

 */

#include <stdio.h>
#include <iostream>

int main() { 
    int result , rev_num , n = 0;
    for (int i=100;i<1000;i++){
	for(int j=100;j<1000;j++){
	    result = i*j;
	    n = result;
	    rev_num = 0; 
	    while (n > 0) { 
        	rev_num = rev_num * 10 + n % 10; 
		n = n/ 10;
	    }
	    if(result == rev_num){printf("%d \n", result);}
	    //printf("Is %d a Palindrome number? -> %d\n", result, rev_num); 
	}
    }
    return 0; 
} 
