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
//switch statement:
#include<iostream>
using namespace std;
int main(){
	int a;
	cout<<"INput the character:";
	cin>>a;
	switch(a){
		case 1:
			cout<<"MOnday";
			break;
		case 2:
			cout<<"Tuesday";
			break;
		case 3:
			cout<<"Wednesday";
			break;
		case 4:
			cout<<"Thurusday";
			break;
		case 5:
			cout<<"Friday";
			break;
		case 6:
			cout<<"Saturday";
			break;
		case 7:
			cout<<"Sunday";
			break;
		default:
			cout<<"Nothing";
	}
	return 0;
}
