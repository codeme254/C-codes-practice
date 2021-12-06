//this project is intended for one to grab the most basic concepts of object oriented programming in C++
//finding the areas of square, circle, semicircle, rectangle, triangle
#include <iostream>
#include <algorithm>
using namespace std;

class Figures{
	public:
		float findSquareArea(){
			float side;
			cout<<"Enter the side of the square ";
			cin>>side;
			return side*side;
		}
		float findRectArea(){
			float length, width;
			cout<<"Enter the length of the rectangle ";
			cin>>length;
			cout<<"Enter the width of the rectangle ";
			cin>>width;
			if(length == width){
				cout<<"ERROR: Detected a non-rectangular figure: this is not a rectangle"<<endl;
				return 0;
			}
			return length*width;
		}
		float findAreaCircle(){
			float radius;
			cout<<"Enter the radius of the circle ";
			cin>>radius;
			return 3.14285714*radius*radius;
		}
		float findAreaTriangle(){
			float base, height;
			cout<<"Enter the base of the trangle ";
			cin>>base;
			cout<<"Enter the height of the triangle ";
			cin>>height;
			return 0.5*base*height;
		}
		float findAreaSemicircle(){
			return findAreaCircle()/2;
		}
};
string getUserDecision();
string findAnother();
int main(){
	Figures figure1;
	string decision;
	errorPoint:
	string wantedFigure = getUserDecision();
	if(wantedFigure == "square"){
		cout<<"The area of the square is "<<figure1.findSquareArea()<<endl;
	}else if(wantedFigure == "circle"){
		cout<<"The area of the circle is "<<figure1.findAreaCircle()<<endl;
	}else if(wantedFigure == "rectangle"){
		cout<<"The area of the rectangle is "<<figure1.findRectArea()<<endl;
	}else if(wantedFigure == "semicircle"){
		cout<<"The area of the semicircle is "<<figure1.findAreaSemicircle()<<endl;
	}else{
		cout<<"Invalid decision please try again\n";
		goto errorPoint;
	}
	return 0;
}

string getUserDecision(){
	string figname;
	/*cout<<"Welcome to the prime system of calculating areas of figures\n";
	cout<<"We support the following figures so far\n";*/
	cout<<"Rectangle, Triangle, Square, Circle, Semicircle"<<endl;
	cout<<"Type the name of the figure you wish to find its area ";
	getline(cin, figname);
	transform(figname.begin(), figname.end(), figname.begin(), ::tolower);
	return figname;
}











