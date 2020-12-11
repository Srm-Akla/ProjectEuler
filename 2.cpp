/*
This is Problem 2 from Project Euler.
Find more information: "https://projecteuler.net/"
*/
#include <iostream>

void Fibonacci_seq(){
  int a=0,b=1, result=0;
  unsigned int sum = a+b;
  for(int i=0;i<50;i++){
    if(sum > 4000000) break;
    a=b;
    b=sum;
    sum=a+b;
    if(sum%2==0){
	result += sum;
	std::cout << result << std::endl;
    }
  }
}

int main(){
  Fibonacci_seq();
  return 0;
}

//Faster & Simpler Method
/*int main(void)
{
	int s = 0;
	for (int i = 1, j = 2; j < 1000000; j += i, i = j-i)
		if (j % 2 == 0)
			s += j;

	cout << s << endl;
	return 0;
}*/
