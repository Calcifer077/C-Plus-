#include<iostream>

using namespace std;
class student{
	private:
		string name, uid, section;
		float marks;
	public:
		void getdata(string, string, string, float);
		void display();
};
int main(){
	student obj;
	obj.getdata("Mahesh","123456789","412", 54);
	obj.display();
	return 0;
}
void student::getdata(string n, string u, string s, float m){
	name = n;
	uid = u;
	section = s;
	marks = m;
}
void student::display(){
	cout<<"Name = "<<name;
	cout<<"\nsection = "<<section;
	cout<<"\nuid = "<<uid;
	cout<<"\nmarks = "<<marks;
}
.........................................................................................
.........................................................................................
.........................................................................................
//a program to enter details of 5 person in class:
#include<iostream>

using namespace std;
class employ{
	private:
		char name[50];
		char designation[50];
		float age;
		double salary;
	public:
		void getdata();
		void display();
};
int main(){
	employ obj[5];
	for(int i=0;i<5;i++){
		obj[i].getdata();
	}
	for(int i=0;i<5;i++){
		obj[i].display();
	}
	return 0;
}
void employ::getdata(){
	cout<<"enter the name of the emoloy ";
	cin>>name;
	cout<<"Enter the designation of the emoloy ";
	cin>>designation;
	cout<<"Enter the age of the employ ";
	cin>>age;
	cout<<"Enter the salary of the employ ";
	cin>>salary;
}
void employ::display(){
	cout<<"Name ="<<name;
	cout<<"\nDesignation ="<<designation;
	cout<<"\nAge ="<<age;
	cout<<"\nSalary ="<<salary;
}
.........................................................................................
.........................................................................................
.........................................................................................
//Same program as above without the use if loops:
#include<iostream>

using namespace std;

class student{
	public:
		char name[40];
		int age;
};

int main(){
	student obj1;
	cout<<"Enter the name of the employ 1: ";
	cin>>obj1.name;
	cout<<"Enter the age of the employ 1: ";
	cin>>obj1.age;
	student obj2;
	cout<<"enter the name of the employ 2: ";
	cin>>obj2.name;
	cout<<"enter the age of the employ 2: ";
	cin>>obj2.age;
	cout<<"Name of employ 1: "<<obj1.name;
	cout<<"\nAge of employ 1: "<<obj1.age;
	cout<<"\nName of employ 2:"<<obj2.name;
	cout<<"\nAge of employ 2:"<<obj2.age;
	return 0;
}
.........................................................................................
.........................................................................................
.........................................................................................
#include<iostream>

using namespace std;

class complex{
	int a,b;
	public:
		void setnumber(int n1, int n2){
			a = n1;
			b = n2;
		}
		void display(){
			cout<<"Your number is "<<a<<" + "<<b<<"i";
		}
};
int main(){
	complex c1, c2;
	c1.setnumber(1,5);
	c2.setnumber(5,6);
	c1.display();
	c2.display();
	return 0;
}
.........................................................................................
.........................................................................................
.........................................................................................
	.................PRACTICE QUESTIONS...............
/*
Write a program to print the area of two rectangles having sides (4,5) and (5,8)
respectively by creating a class named 'Rectangle' with a function named 'Area' 
which returns the area. Length and breadth are passed as parameters to its 
constructor.
*/
#include<iostream>
using namespace std;

class rectangle{
	int a,b;
	public:
		rectangle(int x, int y){
			a = x;
			b = y;
		}
		void area();
};
void rectangle::area(){
	int c;
	c = a * b;
	cout<<"The area for the following a '"<< a << "' and b '"<< b << "' is '"<<c<<"'"<<endl;
}
int main(){
	rectangle obj1(4,5);
	rectangle obj2(5,8);
	obj1.area();
	obj2.area();
	return 0;
}
.........................................................................................
.........................................................................................
.........................................................................................
/*
Print the average of three numbers entered by the user 
by creating a class named 'Average' having a function 
to calculate and print the average without creating 
any object of the Average class.
*/
#include<iostream>
using namespace std;
class average{
	int a,b,c;
	public:
		average(int x, int y, int z){
			a = x; 
			b = y;
			c = z;
		}
		void display();
};
void average::display(){
	int ave;
	ave = (a + b + c)/3;
	cout<<"The average of the three inputted number is "<<ave<<endl;
}
int main(){
	int a,b,c;
	cout<<"Enter three numbers of whose you want to find the average: ";
	cin>>a>>b>>c;
	average obj1(a,b,c);
	obj1.display();
	return 0;
}
.........................................................................................
.........................................................................................
.........................................................................................
#include<iostream>
using namespace std;

class complex{
	int real, imaginary;
	public:
		void getdata(){
			cout<<"The real part is "<<real<<endl;
			cout<<"The imaginary part is "<<imaginary<<endl;
		}
		void setdata(int a, int b){
			real = a;
			imaginary = b;
		}
};
int main(){
	complex c1;
	complex *ptr = &c1;//complex *ptr = new complex;
	//The above line can also be used without above two lines.
	(*ptr).setdata(3,4);            //ptr->setdata(3,4);
	(*ptr).getdata();               //ptr->getdata();	These two can be used.
	// "->"It is the arrow operator.
	return 0;
}
.........................................................................................
.........................................................................................
.........................................................................................
#include<iostream>
using namespace std;

class complex{
	int real, imaginary;
	public:
		void getdata(){
			cout<<"The real part is "<<real<<endl;
			cout<<"The imaginary part is "<<imaginary<<endl;
		}
		void setdata(int a, int b){
			real = a; 
			imaginary = b;
		}
};
int main(){
	complex *ptr = new complex[4];
	ptr->setdata(1,4);
	ptr->getdata();
	return 0;
}
.........................................................................................
.........................................................................................
.........................................................................................
#include<iostream>
using namespace std;

class shop{
	int id;
	int price;
	public:
		void setdata(int a, int b){
			id = a;
			price = b;
		}
		void getdata(){
			cout<<"Code of this item is "<<id<<endl;
			cout<<"Price of this item is "<<price<<endl;
		}
};
int main(){
	int size = 3;
	shop *ptr = new shop [size];
	shop *ptrtemp = ptr;
	int p,q,i;
	for(i =0;i<size;i++){
		cout<<"Enter ID and price of item "<<i+1<<" ";
		cin>>p>>q;
		//(*ptr).setdata(p , q);
		ptr->setdata(p,q);
		ptr++;
	}
	for(i =0; i<size;i++){
		cout<<"Item number: "<<i+1<<endl;
		ptrtemp->getdata();
		ptrtemp++;
	}
	return 0;
}
.........................................................................................
.........................................................................................
.........................................................................................
