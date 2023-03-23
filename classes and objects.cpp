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
