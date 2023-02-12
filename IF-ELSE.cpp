//if else ladder
#include<iostream>

using namespace std;

int main(){
	int a;
	cout<<"enter value";
	cin>>a;
	
	if(a>10){
		if(a>10 && a<18){
			cout<<"Teenager";
		}
		else{
			cout<<"Adult";
		}
	}
	else{
		cout<<"Not eligible to vote. \n";
		cout<<"Not eligible to drive.";
	}
	return 0;
}
......>
//Checking the greatest of the three numbers
#include<iostream>

using namespace std;

int main(){
	int a,b,c;
	cout<<"enter values: ";
	cin>>a;
	cin>>b;
	cin>>c;
	if(a>b){
		if(a>c){
			cout<<"a is the greatest";
		}
		else{
			cout<<"c is the greatest";
		}
}
		else if(b>a){
			if(b>c)
			cout<<"b is the greatest";
			else
			cout<<"c is the greatest";
		
	}
	return 0;
}
........>
