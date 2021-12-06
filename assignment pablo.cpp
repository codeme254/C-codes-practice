/*
 * Class: CMSC140 CRN
 * Instructor:
 * homework6_part1
 * Description: (a program to implement function and invoking through refference and addressse )
 * Due Date: november 5,2021)
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Meetbhai Patel */
#include <iostream>
using namespace std;
//this method gets the two digits and returns them.
//by address/reference in order to return more than one value from this function
int getTwoNumbers(int *num1, int *num2){
	int firstNum, secondNum;
	cout<<"Enter the first digit ";
	cin>>*num1;
	cout<<"Enter the second digit ";
	cin>>*num2;
	firstNum = *num1;
	secondNum = *num2;
	return -1;
}

//this method gets the choice of operation where by as per the instructions, 1 
// is for addition and two is for subtraction
int getChoice(){
	char op;
	int opDig;
	cout<<"Enter the choice of operation 1 for addition and 2 for subtraction ";
	cin>>opDig;
	if(opDig == 1){
		op = '+';
	}else if(opDig == 2){
		op = '-';
	}else{
		op = '-';
	}
	return op;
}

//this method simply performs the operation based on the digits coming from the
//getTwoNumbers function and the operation coming from the getChoice function
int performOperation(){
	char op = getChoice();
	int num1, num2;
	getTwoNumbers(&num1, &num2);
	if(op == '+'){
		return num1 + num2;
	}else if(op == '-'){
		return num1 - num2;
	}
	return -1;
}

//this method displays the results of the operations and it is the methos am calling
//inside the main function
void displayResults(){
	int result = performOperation();
	cout<<"The result of the operation above is "<<result<<endl;
}
int main(){
	displayResults();
}


