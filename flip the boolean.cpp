//create a function called flip that takes in a boolean and flips it
//eg flip(true) returns false and vice versa

#include <iostream>
using namespace std;
bool flip(bool);
int main(){
	string bl;
	cout<<flip(true)<<endl;
	cout<<flip(false)<<endl;
	return 0;
}

bool flip(bool val){
	return !val;
}