//this code show how one can convert a string to lowercase in C++, not
//sure if it is algorithmic efficient way of doing so

#include <iostream>
#include <algorithm>
using namespace std;
string convertToLower(string);
int main(){
	string name;
	cout<<"Enter the word in uppercase to convert to lowercase ";
	getline(cin, name);
	cout<<name<<" in lowercase is "<<convertToLower(name)<<endl;
	return 0;
}

string convertToLower(string wrd){
	transform(wrd.begin(), wrd.end(), wrd.begin(), ::towlower);
	return wrd;
}