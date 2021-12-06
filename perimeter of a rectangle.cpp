//write a function that takes in the length and the width of a rectangle
//and finds the perimeter
#include <iostream>
using namespace std;
int rectPerimeter(int, int);
int main(){
	int length, width, perimeter;
	cout<<"Enter the length of the rectangle ";
	cin>>length;
	cout<<"Enter the width of the rectangle ";
	cin>>width;
	perimeter = rectPerimeter(length, width);
	cout<<"The perimeter of the rectangle is "<<perimeter<<endl;
	return 0;
}

int rectPerimeter(int length, int width){
	return 2*(length) + 2*(width);
}