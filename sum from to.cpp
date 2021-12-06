//write a function called sumFromTo that takes in two integers call them first and last
//the function should then return the sum of all the values between the first and last inclusive

#include <iostream>
using namespace std;
int sumFromTo(int, int);

int main(){
	cout<<sumFromTo(4,7)<<endl;
	cout<<sumFromTo(-3,1)<<endl;
}

int sumFromTo(int first, int last){
	int sum = 0;
	for(int i = first; i <= last; i++){
		sum += i;
	}
	return sum;
}