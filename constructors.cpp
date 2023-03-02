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
...........>
#include<iostream>

using namespace std;

class complex{
	int a,b;
	public:
		complex(int , int);
	    void printnumber(){
			cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
		}
};
complex::complex(int x, int y){//this is a paramaterized constructor
	a = x;
	b = y;
}
int main(){
	//implicit call
	complex c(4,5);
	//explicit call
	complex c2 = complex(1,2);
	c.printnumber();
	c2.printnumber();
	return 0;
}
........>
//ca;culating the area of a rectangle with the help of constructors:
#include<iostream>

using namespace std;

class rectangle{
	int a, b, c;//three variables are declared for storing lentgh, breadth and area.
	public:
		rectangle(int x, int y){//connnstructor is made here with the same name as the class.
			a = x;
			b = y;
		}
		void calc();//Introducing member function to calculate area.
		void print();//Introducing another memeber function to print area.
};
void rectangle::calc(){
	c = a *b;//doing the calculations here. it can access all the variables of the class.
}
void rectangle::print(){
	cout<<"Area is "<<c;
}
int main(){
	rectangle c1(5,6);
	c1.calc();
	c1.print();
	return 0;
}
..........>
//we can do the above program by taking inputs from the user as well.
#include<iostream>

using namespace std;

class rectangle{
	int a, b, c;
	public:
		rectangle(int x, int y){
			a = x;
			b = y;
		}
		void calc();
		void print();
};
void rectangle::calc(){
	c = a *b;
}
void rectangle::print(){
	cout<<"Area is "<<c;
}
int main(){
	int a,b;	
	cout<<"Enter the length and breadth of the rectangle: ";
	cin>>a>>b;//taking inputs here.
	rectangle c1 = rectangle(a,b);//remember this step.
	c1.calc();
	c1.print();
	return 0;
}
