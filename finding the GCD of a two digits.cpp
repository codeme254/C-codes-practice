//write a function called gcd that takes in two positive integers and returns their
//greatest common divisor
#include <iostream>
using namespace std;
int gcd(int, int);
int main(){
	cout<<gcd(40, 50)<<endl;
	cout<<gcd(256, 625)<<endl;
	cout<<gcd(42, 6)<<endl;
	cout<<gcd(0, 32)<<endl;
	cout<<gcd(10, -6)<<endl;
}

int gcd(int num1, int num2){
	int greatest, divisor;
	if(num1<=0||num2<=0){
		return 0;
	}
	if(num1 > num2){
		greatest = num1;
	}else{
		greatest = num2;
	}
	for(int i = 1; i < greatest; i++){
		if(num1%i == 0 && num2%i == 0){
			divisor = i;
		}
	}
	return divisor;
}