//printing hello world 10 times
#include<iostream>

using namespace std;

int main(){
	cout<<"Printing hello world ten times \n";
	for(int i = 0;i<10;i++){
		cout<<"Hello world \n";
	}
	return 0;
}
.........................................................................................
.........................................................................................
.........................................................................................
//Sum of first 10 integers
#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the number upto which you want to sum:";
    int limit; cin>>limit;
    
    int sum = 0;
    
    // for(int i = 1; i <= limit; i++){
    //     sum+= i;
    // }
    int i = 1;
    // while(i <= limit){
    //     sum+= i;
    //     i++;
    // }
    
    do{
        sum+= i;
        i++;
    }while(i <= limit);
    cout<<sum;
    return 0;
}
.........................................................................................
.........................................................................................
.........................................................................................
//use of continue statement:
#include<iostream>
using namespace std;
int main(){
	for(int i=0;i<10;i++){
		if(i%2 != 0){
			continue;
		}
		cout<<"\nEven"<<i;
		
	}
	return 0;
}
......>
//use of break statement:
#include<iostream>
using namespace std;
int main(){
	for(int i=0;i<10;i++){
		if(i%2 != 0){
			continue;
		}
		if(i==6){
			break;
		}
		cout<<"\nEven"<<i;
		
	}
	return 0;
}
.........................................................................................
.........................................................................................
.........................................................................................
//Printing numbers from 1 to 100 skipping numbers divisible by 3:
#include<iostream>
using namespace std;
int main(){
	for(int i=0;i<100;i++){
		if(i%3 == 0){
			continue;
		}
		cout<<i<<" ";
	}
	return 0;
}
.........................................................................................
.........................................................................................
.........................................................................................
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the number you want to check for";
	cin>>n;
	int i;
	for(i=2;i<n;i++){
		if(n%i==0){
			cout<<"Not a Prime number";
			break;
		}
	}
	if(i==n){
		cout<<"Prime";
	}
	return 0;
}
.........................................................................................
.........................................................................................
.........................................................................................
#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"Enter the limit of the numbers:";
	cin>>a>>b;
	int j;
	for(int i=a;i<=b;i++){
		for(j=2;j<i;j++){
			if(i%j==0){
				break;
			}
		}
		if(j==i){
			cout<<i<<" ";
		}
	}
	return 0;
}
.........................................................................................
.........................................................................................
.........................................................................................
