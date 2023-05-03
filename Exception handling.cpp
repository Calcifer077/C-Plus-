//Exception Handling is the handling of exceptions(That are not a error just some mistake which compiler can't detect and the proogram is terminated)
//during run time OR we can say to deal with runtime errors.
#include<iostream>
using namespace std;

int main(){ 
	double a, b,c;
	cout<<"Enter Two numbers: ";
	cin>>a>>b;
	try{
		if (b != 0){
			cout<<(a/b);
		}
		if (b == 0){
			throw b;
		}
	}
	catch(double b){
		cout<<"Can't divide by zero";
	}
	return 0;
}
............>
#include<iostream>
using namespace std;

int main(){
	int x;
	cout<<"Enter value";
	cin>>x;
	
	try{
		if(x==0){
			throw x;
		}
		if(x==100){
			throw 'x';
		}
		if(x==1000){
			throw 1.1;
		}
	}
	catch(int x){
		cout<<"1";
	}
	catch(char x){
		cout<<"2";
	}
	catch(double ){
		cout<<"entered some value";
	}
	return 0;
}
/*
catch(...){
    cout<<"THis is the catch all statement which can catch all type of errors. It should be declared at the last after all other types of catch statements are written 
          if you want to.
          This is also called as generic catch.
         }
*/
