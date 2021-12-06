//write a function called remainder that is going to returnt the remainder of
//division between two numbers when the first digit is divided by the second
//digit i.e remainder(6, 4) returns 2
#include <iostream>
using namespace std;
int remainder(int, int);
int main(){
	int num1, num2, remain;
	cout<<"Enter the first digit ";
	cin>>num1;
	cout<<"Enter the second digit ";
	cin>>num2;
	remain = remainder(num1, num2);
	cout<<"The remainder is "<<remain<<endl;
	return 0;
}

int remainder(int num1, int num2){
	return num1%num2;
}