//write a function called addCol that takes in a collection of digits and returns the sum

#include <iostream>
using namespace std;

int addCol(int arr[], int size){
	int sum = 0;
	for(int i = 0; i < size; i++){
		sum += arr[i];
	}
	return sum;
}

int main(){
	int nums [] = {10, 11, 14, 15};
	int size = sizeof(nums)/sizeof(nums[0]);
	cout<<"The sum of the digits passed is "<<addCol(nums, size);
	return 0;
}

