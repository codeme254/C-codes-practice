//CONVERT MINUTES TO SECONDS
//write a function called convMinsToSecs that takes an integer minute and return
//the seconds equivalent convMinsToSecs(2) returns 120 convMinsToSecs(5) returns 300

#include <iostream>
using namespace std;
int convMinsToSecs(int);
int main(){
	int mins, seconds;
	cout<<"Enter the minutes you wish to convert to seconds: ";
	cin>>mins;
	seconds = convMinsToSecs(mins);
	cout<<"The equivalent of "<<mins<<" minutes to seconds is "<<seconds<<endl;
	return 0;
}
int convMinsToSecs(int mins){
	return mins*60;
}