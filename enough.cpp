//write a function called enough that takes in one integer arguement call it goal,
//and returns as its value the smallest positive integer n for which 1+2+3+..+n is at least
//equal to goal
#include <iostream>
using namespace std;

int enough(int);
int main(){
	cout<<enough(9)<<endl;
	cout<<enough(21)<<endl;
	cout<<enough(-7)<<endl;
	cout<<enough(1)<<endl;
	return 0;
}

int enough(int goal){
	int sum = 0;
	int maxVal;
	for(int i = 1; i <= goal; i++){
		maxVal = i;
		sum += maxVal;
		if(sum == goal || sum > goal){
			break;
		}
	}
	return maxVal;
}