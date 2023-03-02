#include<iostream>

using namespace std;
/*
Constructor is a special memeber function with the same name as of the class.
It is automatically invoked whenever an object is created. 
It is used to initialize the objects of its class.
*/

class complex{
	int a,b;
	public:
		complex(void);//constructor declaration;
		//constructor will have the same name as the class;
		void printnumber(){
			cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
		}
};
complex::complex(void){//this is a default constructor as it takes no perimeter
	a = 10;
	b = 12;
}
int main(){
	complex c;
	c.printnumber();
	return 0;
}
/*Characteristics of constructor:
1. It should be declared in the public section of the class.
2. They are invoked whenever the object is created.
3. They cannot return values and do not have return types.
4. It can have default arguments.
5. We cannot refer to their addrress.
*/
