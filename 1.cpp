/*
This is Problem 1 from Project Euler.
Find more information: "https://projecteuler.net/"
*/

// This program find the sum of multiples of 3 & 5
#include <iostream>
#include <vector>

using namespace std;

void Calculate_multiples(){ //function for calulating multiples of a and b
  int sum = 0;
  for(int i=1; i<1000; i++){
    if(i%3==0 || i%5==0){// if 'i' is a multiple of '3' or '5', appends 'i' to array.
	sum += i;
    }
  }
  cout <<"Sum:" << sum << endl; 
}

int main() {
  Calculate_multiples(); // calls the function
  return 0;
}
