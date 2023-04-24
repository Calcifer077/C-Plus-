#include<iostream>
using namespace std;

int main(){
	int n =5;
	cout<<&n<<endl;//will print address of the variable.
	int *ptr = &n;
	cout<<ptr<<endl;//will print address of the variable.
	
	cout<<*ptr<<endl;//Defrencing the pointer. Will print the value of the variable
	
	*ptr = 10;
	
	cout<<*ptr<<endl;
	return 0;
}
.........................................................................................
.........................................................................................
.........................................................................................
//VOID PONTER IS THE TYPE OF POINTER WHICH CAN POINT TO A VARIABLE OF ANY DATA TYPE.
#include<iostream>
using namespace std;

void printnumber(int* numberptr){
	cout<<*numberptr<<endl;
}
void printletter(char* charptr){
	cout<<*charptr<<endl;
}
void print(void *ptr, char type){
	switch(type){
		case 'i':
			cout<<*((int*)ptr)<<endl;//Casting and derefrencing
			break;
		case 'c':
			cout<<*((char*)ptr)<<endl;
			break;
	}
}
int main(){
	int number = 5;
	//printnumber(&number);
	char letter = 'a';
	//printletter(&letter);
	print(&number, 'i');
	print(&letter, 'c');
	
	return 0;
}
.........................................................................................
.........................................................................................
.........................................................................................
#include<iostream>
using namespace std;

int main(){
	int number[5];
	/*cout<<number<<endl;//Both will have the same output.
	cout<<&number[0]<<endl;//Both will have the same output.
	
	
	cout<<number[2]<<endl;//Both will have the same output.
	cout<<*(number+2)<<endl;//Both will have the same output.
	*/
	
	
	for(int i = 0;i<=4;i++){
		cout<<"Enter number: ";
		cin>>number[i];
	}
	for(int i = 0;i<=4;i++){
		cout<<"Numbers are: ";
		cout<<*(number+i)<<endl;
	}
	
	
	return 0;
}
.........................................................................................
.........................................................................................
.........................................................................................
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
.........................................................................................
.........................................................................................
.........................................................................................
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
.........................................................................................
.........................................................................................
.........................................................................................
