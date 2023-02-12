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
