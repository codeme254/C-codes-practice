//write a function called isEqual that return true if two numbers are equal and
//returns false if they are not equal

#include <iostream>
using namespace std;
bool isEqual(int, int);
int main(){
	int num1, num2;
	cout<<"Enter the first digit ";
	cin>>num1;
	cout<<"Enter the second digit ";
	cin>>num2;
	if(isEqual(num1, num2)){
		cout<<"The two numbers are equal"<<endl;
	}else
	{
		cout<<"The two numbers are not equal"<<endl;
	}
	return 0;
}

bool isEqual(int num1, int num2){
	return num1 == num2;
}