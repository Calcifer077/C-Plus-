//THE SIZE OF THE ARRAY IS CONSTANT. IF WE WANT THE USER TO ENTER THE SIZE OF THE ARRAY, WE NEED TO USE DYNAMIC MEMORY ALLOCATION.
//A POINTER OF A BASE CLASS CAN ONLY ACCESS THE DATA OF BASE CLASS EVEN IF IT IS GIEVN THE ADDRESS OF THE PBJECT OF DERIVED CLASS.Like:
		int main(){
			baseclass *base_class_pointer;
			base_class_pointer = &derived_class_object;//it can't access the data of the derived class as it is the pointer 
									of the base class.
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

int getmin(int number[], int size){
	int min = number[0];
	for(int i = 1; i<size;i++){
		if(number[i]<min){
			min = number[i];
		}
		return min;
	}
}
int getmax(int number[], int size){
	int max = number[0];
	for(int i = 0; i<size;i++){
		if(number[i]>max){
			max = number[i];
		}
		return max;
	}
}
void getminandmax(int number[], int size, int *min, int *max){
	for(int i =1;i<size;i++){
		if(number[i] > *max){
			*max = number[i];
		}
		if(number[i] < *min){
			*min = number[i];
		}
	}
}
int main(){
	int number[5] = {1,3,-5,7,9};
	int max = number[0];
	int min = number[0];
	//cout<<"Min is "<<getmin(number, 5)<<endl;
	//cout<<"MAx is "<<getmax(number, 5)<<endl;
	getminandmax(number, 5, &min, &max);
	cout<<"Max is "<<max<<endl;
	cout<<"Min is "<<min<<endl;

	return 0;
}
...........>
#include<iostream>
using namespace std;

int main(){
	int size;
	cout<<"Enter size: "<<endl;
	cin>>size;
	int *arr = new int[size];
	for(int i = 0; i <size ; i++){
		cout<<"Enter array elements "<< i <<" : "<<endl;
		cin>>arr[i];
	}
	for(int i = 0; i<size;i++){
		//cout<<arr[i]<<" "<<endl;//BOTH ARE SAME.
		cout<<*(arr+i);//BOTH ARE SAME.
	}
	
	delete[]arr;
	arr = NULL;
	return 0;
}
...........>
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
#include<iostream>
using namespace std;

class baseclass{
	public:
		int var1;
		void display(){
			cout<<"Hello";
		}
};
int main(){
	baseclass *base_class_pointer;
	baseclass obj1;
	base_class_pointer = &obj1;//pointer pointing to the baseclass object.
	base_class_pointer->display();
	return 0;
}
.........................................................................................
.........................................................................................
.........................................................................................
