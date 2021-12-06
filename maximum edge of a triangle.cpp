//create a function thaat returns the maximum range of a triangle's third edge
//where the side edges are all integers eg nextEdge(8,10) returns 17,
//nextEdge(5,7) returns 11 note (side1 + side2) - 1 = maximum edge

#include <iostream>
using namespace std;
int maxEdge(int, int);
int main(){
	int side1, side2, maxEdgeRange;
	cout<<"Enter the dimension of the first side ";
	cin>>side1;
	cout<<"Enter the dimension of the second side ";
	cin>>side2;
	maxEdgeRange = maxEdge(side1, side2);
	cout<<"The maximum third edge range is "<<maxEdgeRange<<endl;
	return 0;
}

int maxEdge(int side1, int side2){
	return (side1+side2) - 1;
}