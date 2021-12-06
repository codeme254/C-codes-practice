//THE POWER CALCULATOR
//write a function called circuitPower that takes in the voltage and current and returns
// the calculated powe eg circuitPower(10, 20) returns 200 circuitPower(110, 5) returns 550

#include <iostream>
using namespace std;
float circuitPower(float, float);
int main(){
	float power, voltage, current;
	cout<<"Input the value of the voltage ";
	cin>>voltage;
	cout<<"Input the value if the current ";
	cin>>current;
	power = circuitPower(voltage, current);
	cout<<"The power is "<<power<<endl;
}
float circuitPower(float voltage, float current){
	return voltage*current;
}