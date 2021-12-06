#include <iostream>
using namespace std;

class a{
	public:
		void Afun();
};
void a::Afun(){
	cout<<"This is the body of class A"<<endl;
}
class b:public a{
	public:
		void Bfun();
};
void b::Bfun(){
	cout<<"This is the body of class B"<<endl;
};
int main(){
	b objb;
	objb.Afun();
	return 0;
}