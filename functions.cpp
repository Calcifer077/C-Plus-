//finding factorial of a number using finctions:
#include<iostream>
using namespace std;
int fact(int a);
int main(){
	int a;
	cout<<"ENter the number: ";
	cin>>a;
	fact(a);
	return 0;
}
int fact(int a){
	int product =1;
	for(int i=1;i<=a;i++){
		product = product * i;
		
	}
	cout<<" "<<product;
}
