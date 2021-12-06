//RETURN THE SUM OF TWO NUMBERS
//create a function called addition that returns the sum of two numbers
//addition(10, 20) returns 30

#include <iostream>
using namespace std;
int addition(int, int);
int main(){
	int number1, number2, sum;
	cout<<"Enter the first digit ";
	cin>>number1;
	cout<<"Enter the second digit ";
	cin>>number2;
	sum = addition(number1, number2);
	cout<<"The sum is "<<sum<<endl;
	return 0;
}
int addition(int num1, int num2){
	return num1+num2;
}