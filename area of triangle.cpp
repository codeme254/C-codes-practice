//AREA OF A TRIANGLE
//write a function that takes the base and height of a triangle and returns the area
//areaTri(7, 4) returns 14, areaTri(3, 2) returns 3

#include <iostream>
using namespace std;
float areaTri(float, float);
int main(){
	float base, height, area;
	cout<<"Enter the value of the base of the triangle ";
	cin>>base;
	cout<<"Enter the height value of the triangle ";
	cin >>height;
	area = areaTri(base, height);
	cout<<"The area of the triangle is "<<area<<endl;
}

float areaTri(float base, float height){
	return 0.5*base*height;
}