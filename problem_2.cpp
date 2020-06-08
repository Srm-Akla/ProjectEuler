/*
This is Problem 1 from Project Euler.
Find more information: "https://projecteuler.net/"
*/
#include <vector>
#include <iostream>
using namespace std;

void Fibonacci_seq(vector<int> arr){
  int a=0,b=1;
  unsigned int sum = a+b;
  while(sum<= 4000000){
    cout << sum << endl;
    a=b;
    b=sum;
    sum=a+b;
    arr.push_back(sum);
  }
  for (auto i = arr.begin(); i != arr.end(); ++i){ //Reads the array from the begining to end
    //sum +=  *i; //Sum of all multiples of 'a' and 'b'
    cout << *i << ","; // prints multiples of 'a' and 'b'
  }
}

int main(){
  vector<int> Sum_Fibonacci;
  Fibonacci_seq(Sum_Fibonacci);
  return 0;
}
