/*
This is Problem 1 from Project Euler.
Find more information: "https://projecteuler.net/"
*/

// This program find the sum of multiples of 3 & 5
#include <iostream>
#include <vector>

using namespace std;

void Calculate_multiples(vector<int> arr, int n){ //function for calulating multiples of a and b
  int sum = 0;
  for(int i=1; i<n; i++){
    if(i%3==0 || i%5==0){// if 'i' is a multiple of '3' or '5', appends 'i' to array.
      arr.push_back(i);
    }
  }
  for (auto i = arr.begin(); i != arr.end(); ++i){ //Reads the array from the begining to end
    sum +=  *i; //Sum of all multiples of 'a' and 'b'
    //cout << *i << ","; // prints multiples of 'a' and 'b'
  }
  cout <<"Sum:" << sum << endl; 
  cout << "size:" << arr.size()<< endl; //prints size of the array
}

int main() {
  vector<int> multiples; 
  Calculate_multiples(multiples,1000); // calls the function
  return 0;
}
