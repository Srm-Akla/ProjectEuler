/*
 * Author: Sriram Akella
 * Date: 11/12/20
 * 
 * Problem 6:
 * The sum of the squares of the first ten natural numbers is, 1²+2²+3²+...+10²=385
 * The square of the sum of the first ten natural numbers is, (1+2+3+10)²=55²=3025
 * Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025-385=2640
 * Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
 *
 */


#include <iostream>
#include <cmath>

int sum_squares(){
    int result = 0;
    for(int i =1; i<=100; i++){
	result = result + pow(i,2);
    }
    return result;
}

int square_sum(){
    int result = 0;
    for(int i =1; i<=100; i++){
	result = result + i;
    }
    return pow(result,2);
}

int main(){

    sum_squares();
    square_sum();

    int final_result = square_sum() - sum_squares();
    std::cout << final_result << std::endl;
    return 0;
}
