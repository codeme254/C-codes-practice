//usign cpp class, write a program that can capture and display various details of a person
#include <iostream>
using namespace  std;

class Person{
	private:
		string name;
		int age;
		string course;
		string university;
    public:
    	string captureName(){
			cout<<"Enter your name ";
			getline(cin, name);
			return name;
		}
		
		string captureCourse(){
			cout<<"What course do you take ";
			getline(cin, course);
			return course;
		}
		string captureUniversity(){
			cout<<"Which campus do you study ";
			getline(cin, university);
			return university;
		}
		int captureAge(){
			cout<<"Enter your age ";
			cin>>age;
			return age;
		}
		
};
int main(){
	Person person1;
	string name, course, university;
	int age;
	name = person1.captureName();
	course = person1.captureCourse();
	university = person1.captureUniversity();
	age = person1.captureAge();
	
	cout<<"Here are your details "<<name<<endl;
	cout<<"Name: "<<name<<endl;
	cout<<"Course: "<<course<<endl;
	cout<<"University: "<<university<<endl;
	cout<<"Age: "<<age<<endl;
	return 0;
}