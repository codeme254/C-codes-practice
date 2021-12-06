//RETURN THE NEXT NUMBER FROM THE INTEGER PASSED
//Write a function called nextNumber that takes in an integer and returns the next number
//from the integer passed ie nextNumber(10) returns 11 nextNumber(-3) returns -2

#include <iostream>
using namespace std;
int nextNumber(int);
int main(){
	cout<<nextNumber(10)<<endl;
	cout<<nextNumber(0)<<endl;
	cout<<nextNumber(-3)<<endl;
	cout<<nextNumber(23)<<endl;
	cout<<nextNumber(5)<<endl;
}
int nextNumber(int num){
	return num+1;
}