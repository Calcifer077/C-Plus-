#include<iostream>
using namespace std;

class A{
	int a;
	public:
		void setdata(int a){
			this->a = a;
		}
		void getdata(){
			cout<<"The value of a is "<<a<<endl;
		}
};
int main(){
	//this is a keyword which is a pinter which points to the object which
	//invokes the member function.
	A obj;
	obj.setdata(10);
	obj.getdata();
	return 0;
}




#include<iostream>
using namespace std;

class A{
	int a;
	public:
		A & setdata(int a){
			this->a = a;
			return *this;
		}
		void getdata(){
			cout<<"The value of a is "<<a<<endl;
		}
};
int main(){
	//this is a keyword which is a pinter which points to the object which
	//invokes the member function.
	A obj; 
	obj.setdata(10).getdata();
	return 0;
}
