//Datatypes
#include<iostream>

using namespace std;

int main(){
	int a;//declaration of variables.
	cout<<"Size of int is "<<sizeof(a)<<endl;
	
	float b;
	cout<<"Size of float is "<<sizeof(b)<<endl;
	
	char c;
	cout<<"Size of char is "<<sizeof(c)<<endl;
	
	bool d;
	cout<<"Size of bool is "<<sizeof(d)<<endl;
	
	short int si;
	cout<<"Size of short int is "<<sizeof(si)<<endl;
	
	long int li;
	cout<<"Size of long int is "<<sizeof(li)<<endl;
	return 0;
}
......>
//using simple input output
#include<iostream>

using namespace std;

int main(){
	int a,b;
	cout<<"enter the value of a: ";
	cin>>a;
	cout<<"Enter the value of b: ";
	cin>>b;
	
	cout<<"Total value is "<<a+b;
	return 0;
}
.......>
//using simple if else condition
#include<iostream>

using namespace std;

int main(){
	int a;
	cout<<"enter value";
	cin>>a;
	
	if(a>18){
		cout<<"Eligible to vote. \n";
		cout<<"Eligible to drive.";
	}
	else{
		cout<<"Not eligible to vote. \n";
		cout<<"Not eligible to drive.";
	}
	return 0;
}
.......>
//....................................CONSTANTS....................................
//Constants are the value which can't be changed during the execution of a program.
#include<iostream>

using namespace std;

int main(){
	const int a = 54;//here we are declaring 'a' as a constant using 'const' keyword.
	//of we were to give 'a' any other value we will get an error.
	cout<<"The value of a is:"<<a;
	
	return 0;
}
........>
//....................................MANIPULATORS...............................
//Manipulators are used for formattng your text.
//One is 'endl' which marks the end of the line.
//Another is 'setw' which gives a particular size to your outout.
//To use 'setw' we should use '<iomanip>
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int a = 1,b = 12, c = 123;
	cout<<"THe value of a without setw is"<<a<<endl;
	cout<<"THe value of b without setw is"<<b<<endl;
	cout<<"THe value of c without setw is"<<c<<endl;
	
	cout<<"The value of a with setw is"<<setw(4)<<a<<endl;
	cout<<"The value of b with setw is"<<setw(4)<<b<<endl;
	cout<<"The value of c with setw is"<<setw(4)<<c<<endl;
	return 0;
}
#include<iostream>
using namespace std;

int main(){
	int a = 4;
	int *ptr = &a;
	
	cout<<"The value of a is "<<*(ptr)<<endl;
	
	//new-> Dynamically allocating memory.
	//delete -> Free dynamically allocated memory.
	int *p = new int(40);
	cout<<"The value is "<<*(p)<<endl;
	
	int *arr = new int[3];
	arr[0] = 10;
	*(arr + 1) = 20;
	arr[2] = 30;
	cout<<"The value of arr[0] is "<<arr[0]<<endl;
	cout<<"The value of arr[1] is "<<arr[1]<<endl;
	cout<<"The value of arr[2] is "<<arr[2]<<endl;
	
	
	return 0;
}
