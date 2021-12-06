//this code is used to detect prime number

#include <iostream>
using namespace std;

bool isPrime(int);
 int main(){
	 /*int num;
     cout<<"Enter a digit to see whether it is prime or not ";
     cin>>num;
     if(isPrime(num)){
		 cout<<num<<" is a prime number"<<endl;
	 }else{
		 cout<<num<<" is not a prime number"<<endl;
	 }*/
	 for(int i = 1; i <= 500; i++){
		 if(isPrime(i)){
			 cout<<i<<endl;
		 }
	 }
	 
	 return 0;
 }
 
 bool isPrime(int num){
 	int count=0;
	 for(int i = 1; i <=num; i++){
		 if(num%i == 0){
			 count ++;
		 }
	 }
	 if(count == 2){
		 return true;
	 }else{
		 return false;
	 }
 }