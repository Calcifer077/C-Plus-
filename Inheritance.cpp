/*
Inheritance ->can be used fro using a particular class methods and memebers in another class.
It have better code reusabliity.
Types of INheritance:
................SINGLE INHERITANCE............
In this type there are only two classes that are base class(WHose properties will be derived by another class) and derived class(THE class
which uses properties of another class).
>For easy remebring :
BASE CLASS - PARENT
DERIVED CLASS - CHILDREN.
..............................................
..............MULTILEVEL INHERITANCE............
In this tye there is more than one level of inheritance like a family of three ore more genreations.
In this a class(II) takes property of another class(I) and a third class(III) takes the properties of (II) class.
.............................................
............MULTIPLE INHERITANCE.............
In this type a class takes properties from more than one class.
.............................................
............HIERARCHICAL INHERITANCE.........
This type of inheritance is the reverse of multiple inheritance. In this type a single base class have many derived class.
Say a single parent have more than one children.
............................................
...........HYBRID INHERITANCE...............
In thsi type more than one type of inheritance is used.
...........................................
There are visibility mode in classes. Like the data from the base class will be accessible to the derived class in what manner.
Default visibility mode is private.
During private mode, Public members of the base class becomes private members of the derived class.
During public mode, Public members remain public in the derived class.
The private class of the base class are never inherited in the derived class.
*/
#include<iostream>
using namespace std;

class staff{
    public:
    int code;
    char name[50];
    void getdatastaff(){
      cout<<"Enter name(char):";
      cin>>name;
      cout<<"Enter code(int):";
      cin>>code;
}
    void displaystaff(){
      cout<<"Name is: "<<name<<endl;
      cout<<"Code is: "<<code<<endl;
}
};
class teacher : public staff{
    public:
      char subject[50];
      char publication[50];

      void getdatateacher(){
          cout<<"Enter subject name(char);";
          cin>>subject;
          cout<<"Enter publication name(char);";
          cin>>publication;
}
void displayteacher(){
    cout<<"Suject name is: "<<subject<<endl;
    cout<<"Publication name is: "<<publication<<endl;
}
};
class officer : public staff{
    public:
      int grade;
      void getdataofficer(){
          cout<<"Enter grade of the officer(int):";
           cin>>grade;
}
      void displayofficer(){
          cout<<"Grade is : "<<grade<<endl;
}
};

class typist : public staff{
    public:
      int speed;
      int dailywages;
      void getdatatypist(){
          cout<<"Enter typing speed of typist(int);";
          cin>>speed;
          cout<<"Enter dailywages of typist(int):";
          cin>>dailywages;
      }
       void displaytypist(){
          cout<<"Typing speed is : "<<speed<<endl;
          cout<<"Daily wages is : "<<dailywages<<endl;
}
};
int main(){
    int i;
    cout<<"MEnu:\n'1'for teacher\n'2' for officer\n'3' for typist\n'4'for exiting:";
    cin>>i;
    switch(i){
      case 1:
        cout<<".....TEACHERS INFORMATION....."<<endl;
        start_teacher:
        teacher obj1;
        cout<<"Enter teachers details:"<<endl;
        obj1.getdatastaff();
        obj1.getdatateacher();
        obj1.displaystaff();
        obj1.displayteacher();
        int a;
        cout<<"If you want to add more details enter '1'\nIf you dont want to add more detail enter '2':"<<endl;
        cin>>a;
        if(a == 1){
            goto start_teacher;
      }
        if(a == 2){
            goto end;
}
        break;

    case 2:
        cout<<".......OFFICER INFORMATION......"<<endl;
        start_officer:
        officer obj2;
        cout<<"Enter officer details:"<<endl;
        obj2.getdatastaff();
        obj2.getdataofficer();
        obj2.displaystaff();
        obj2.displayofficer();
        int b;
        cout<<"If you want to add more details enter '1'\nIf you dont want to add more detail enter '2':"<<endl;
        cin>>b;
        if(b == 1){
        goto start_officer;
}
        if(b == 2){
        goto end;
}
        break;

    case 3:
      cout<<"........TYPIST INFORMATION......."<<endl;
      start_typist:
      typist obj3;
      cout<<"Enter typist details:"<<endl;
      obj3.getdatastaff();
      obj3.getdatatypist();
      obj3.displaystaff();
      obj3.displaytypist();
      int c;
      cout<<"If you want to add more details enter '1'\nIf you dont want to add more detail enter '2':"<<endl;
      cin>>c;
      if(c == 1){
      goto start_typist;
      }
      if(c == 2){
      goto end;
    }
      break;
      deafult:
      cout<<"You exited \n";
}
      end:
      cout<<"THAnks for using it.";
return 0;
}
.........................................................................................
.........................................................................................
.........................................................................................
#include<iostream>
using namespace std;

class employee{
	public:
	int id;
	float salary;
	
	employee(int x){
		id = x;
		salary = 100;
	}
	employee(){}
	
};
class base : employee{//No visibilty mode hence it is private.
	public:
	base(int y){
		id = y;
	}
	int languagecode = 9;
	void getdata(){
		cout<<id<<endl;//to print the value of id because we can't access it outside this class.
	}
};
int main(){
	employee obj1(1), obj2(2);
	cout<<obj1.id<<endl;
	cout<<obj2.salary<<endl;
	base obj3(7);
	obj3.getdata();
	return 0;
}
#include<iostream>
using namespace std;
class base{
	int data1;
	public:
		int data2;
		void setdata();
		int getdata1();
		int getdata2();
};
void base::setdata(){
	data1 = 10;
	data2 = 20;
}
int base::getdata1(){
	return data1;
}
int base::getdata2(){
	return data2;
}
class derived : public base{
	int data3;
	public:
		void process();
		void display();
		
};
void derived::process(){
	data3 = (data2 * getdata1());
}
void derived::display(){
	cout<<"Value of data 1 is "<<getdata1()<<endl;
	cout<<"Value of data 2 is"<<data2<<endl;
	cout<<"Value of data 3 is"<<data3<<endl;
}
int main(){
	derived obj;
	obj.setdata();
	obj.process();
	obj.display();
	return 0;
}
.........................................................................................
.........................................................................................
.........................................................................................
//Same as the above program just with private visibilty mode.
#include<iostream>
using namespace std;
class base{
	int data1;
	public:
		int data2;
		void setdata();
		int getdata1();
		int getdata2();
};
void base::setdata(){
	data1 = 10;
	data2 = 20;
}
int base::getdata1(){
	return data1;
}
int base::getdata2(){
	return data2;
}
class derived : base{
	int data3;
	public:
		void process();
		void display();
		
};
void derived::process(){//visibilty mode private hence can't directly acces members of the base class in the main function. And entierly
    //can't access data1.
	setdata();
	data3 = (data2 * getdata1());
}
void derived::display(){
	cout<<"Value of data 1 is "<<getdata1()<<endl;
	cout<<"Value of data 2 is"<<data2<<endl;
	cout<<"Value of data 3 is"<<data3<<endl;
}
int main(){
	derived obj;
	obj.process();
	obj.display();
	return 0;
}
.........................................................................................
.........................................................................................
.........................................................................................
/*
                            Public derivation       Private derivation      Protected derivation
1. Private members              Not Inherited           Not Inherited           Not Inherited
2. Protected members            Protected               Private                 Protected
3. Public members               Public                  Private                 Protected

Protected members can be inherited in the next class but will act as protected members(kind of same behaviour as private members).
*/
.........................................................................................
.........................................................................................
.........................................................................................   
..................MULTILEVEL INHERITANCE.............	
#include<iostream>
using namespace std;

class student{
	protected:
		int roll_number;
	public:
		void set_rollnumber(int);
		void get_rollnumber();
};
void student::set_rollnumber(int r){
	roll_number = r;
}
void student::get_rollnumber(){
	cout<<"The roll number is "<<roll_number<<endl;
}

class exam:public student{
	protected:
		float maths;
		float physics;
	public:
		void set_marks(float, float);
		void get_marks();
};
void exam::set_marks(float a, float b){
	maths = a;
	physics = b;
}
void exam::get_marks(){
	cout<<"Marks in maths: "<<maths<<endl;
	cout<<"Marks in physics: "<<physics<<endl;
}
class result:public exam{
	float percentage;
	public:
		void display(){
			get_rollnumber();
			get_marks();
			cout<<"Percentage is"<<(maths + physics)/2<<endl;
		}
};
int main(){
	result obj1;
	obj1.set_rollnumber(123);
	obj1.set_marks(10,30);
	obj1.display(); 
	return 0;
}
/*
If we are inheriting B from A and C from B:[A--->B--->c]
1. A is the base class for B and B is the base class for C.
2. A--->B--->C is called Inheritance path.
*/
.........................................................................................
.........................................................................................
.........................................................................................
..................MULTIPLE INHERITANCE...........
#include<iostream>
using namespace std;

class Base1{
	protected:
		int base1int;
	public:
		void set_base1int(int a){
			base1int = a;
		}
};
class Base2{
	protected:
		int base2int;
	public:
		void set_base2int(int b){
			base2int = b;
		}
};
class derived: public Base1, public Base2{
	public:
		void show(){
			cout<<"The value of Base 1 is "<<base1int<<endl;//base1int is protected
			cout<<"The value of Base 2 is "<<base2int<<endl;//base2int is protected
			cout<<"The sum is "<<base1int + base2int<<endl;
		}
};
int main(){
	derived obj;
	obj.set_base1int(5);
	obj.set_base2int(34);
	obj.show();
}
.........................................................................................
.........................................................................................
.........................................................................................
#include<iostream>
using namespace std;

class base1{
	public:
		void greet(){
			cout<<"HOw are you!";
		}
};
class base2{
	public:
		void greet(){
			cout<<"How are you_1";
		}
};
class derived: public base1, public base2{
	public:/*
	could also write instead of the whole given under
	base1::greet();  In this way the derived class will only use the function in the mentioned class, which in this case is base1.
	*/
		void greet(){
			cout<<"Hello";
		}
};
int main(){
	derived obj;
	obj.greet();//It would have a problem of ambiguity if greet was not declared in the derived class as their are similar functions in the above classes.
	//We can also resolve this problem by declaring which class function to use.
	return 0;
}
