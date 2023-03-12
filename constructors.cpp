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
.........>
//program to calculate distancee between two points
#include<iostream>
#include<math.h>
using namespace std;

class point{
	double x, y, d;
	friend void calc(point p1, point p2);
	public:
		point(int a, int b){
			x =a;
			y =b;	
		}  
		
		void display(){
			cout<<"The point is "<<x<<" + "<<y<<endl;
	}
};
void calc(point p1, point p2){
	double a = (p1.x - p2.x);
	double b = (p2.y - p2.y);
	double d = sqrt(pow(a,2) + pow(b,2));
	cout<<"THE distance between two points is "<<d;
}
int main(){     		
	point p1(1 ,0);
	p1.display();
	point p2(70,0);
	p2.display();
	calc(p1,p2);
	return 0;
}
.........>
//constructor overloading
#include<iostream>

using namespace std;

class complex{
	int a,b;
	public:
		complex(int x, int y){
			a = x;
			b = y;
		}
		complex(int x){
			a  = x;
		}
		complex(){
			a = 0;
			b = 0;
		}
		void display(){
			cout<<a<<"+ "<<b<<endl;
		}
};
int main(){
	complex c1(4,6);
	complex c2(8);
	complex c3;
	c1.display();
	c2.display();
	c3.display();
	return 0;
}
...........>
#include<iostream>

using namespace std;

class number{
	int a;
	public:
		number(){}//default constructor. It is required when other type of constructor are used int he format
		number(int num){
			a = num;
		}
		//when no copy constructor is found compiler supplies its own copy constructor.
		number(number &obj){
			cout<<"Copy constructor called: "<<endl;
			a = obj.a;
		}
		void display(){
			cout<<"The number for this object is "<<a<<endl;
		}
};


int main(){
	number x,y,z(4);
	z.display();
	x.display();
	y.display();
	number z1(x);//copy constructor invoked
	z1.display();
	
	return 0;
}
............>

#include<iostream>
using namespace std;

class simple{
	int data1;
	int data2;
	public:
		simple(int a, int b = 9){
			data1 = a;
			data2 = b;
		}
		void display(){
			cout<<"The value of data is "<<data1<<" and "<<data2;
		}
};

int main(){     		
	simple obj(1,7);//if we were not to give value of 'b' here it would have printed the value given above that is 9.
	obj.display();
	return 0;
}
............>
#include<iostream>

using namespace std;

class number{
	int a;
	public:
		number(){}//default constructor. It is required when other type of constructor are used int he format
		number(int num){
			a = num;
		}
		//when no copy constructor is found compiler supplies its own copy constructor.
		number(number &obj){
			cout<<"Copy constructor called: "<<endl;
			a = obj.a;
		}
		void display(){
			cout<<"The number for this object is "<<a<<endl;
		}
};


int main(){
	number x,y,z(4);
	z.display();
	x.display();
	y.display();
	number z1(x);//copy constructor invoked
	z1.display();
	//copy constructor will be invoked only when it is declared and used in the same line.
	//like:
	number z2 = z;//valid
	//It will not be correct if we declare the object in some other line and try to use it in the copy construtor/
	return 0;
}
.................>
#include<iostream>

using namespace std;
//destructor never takes an argument nor does it return any value.
int count = 0;
class num{
	public:
		num(){
			count++;
			cout<<"Constructor is called"<<count<<endl;
		}
		~num(){
			cout<<"Destructor is called"<<count<<endl;
			count--;
		}
};
int main(){ 
	cout<<"Inside main function"<<endl;
	cout<<"Creating main funtion"<<endl;
	num obj1;
	{
		cout<<"Entering this block"<<endl;
		cout<<"Creating two more objects"<<endl;
		num obj2, obj3;
		cout<<"Exiting this block"<<endl;
	}
	cout<<"Back to main function"<<endl;
	return 0;
}
........>
