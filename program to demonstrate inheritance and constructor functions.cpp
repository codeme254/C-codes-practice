#include <iostream>
using namespace std;

class social{
	string name;
	public:
		social(string pName){
			pName = name;
		}
		void sayHi(string personName){
			cout<<"Hello "<<personName<<endl;
		}
};
int main(){
	social person1;
	person1.sayHi("dennis otwoma");
	return 0;
}