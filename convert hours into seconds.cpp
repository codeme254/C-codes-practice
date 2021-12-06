//write a function called howManySeconds that converts hours into seconds eg
//howManySeconds(2) returns 7200

#include <iostream>
using namespace std;
int howManySeconds(int);
int main(){
	int hours;
	cout<<"How many hours do you wish to convert into seconds ";
	cin>>hours;
	cout<<"That is "<<howManySeconds(hours)<<" seconds"<<endl;
	return 0;
}

int howManySeconds(int hours){
	return hours*3600;
}
