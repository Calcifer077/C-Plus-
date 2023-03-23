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
.........................................................................................
.........................................................................................
.........................................................................................
//
#include<iostream>
using namespace std;
int prime(int a, int b);
int main(){
	int a,b;
	cout<<"ENter the limit:";
	cin>>a>>b;
	prime(a,b);
	return 0;
}
int prime(int a, int b){
	int i,j;
	for(i=a;i<b;i++){
		for(j=2;j<i;j++){
			if(i%j==0){
				break;
			}
		}
		if(j==i){
			cout<<i<<" ";
		}
	}
}
.........................................................................................
.........................................................................................
.........................................................................................
