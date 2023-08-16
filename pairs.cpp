#include<iostream>
#include<utility>//used to use pairs.
//pairs are used when we want to store two type of data together.
using namespace std;

int main(){
	pair <int,char> p;//here we declared a pair with name p with type int and char.
	p.first = 3;//This is used to access first element in the pairt.
	p.second = 'f';//Second element.
	cout<<p.first;//can print only bu this way. can;t just write 'p'.
	return 0;
}
.........................................................................................
.........................................................................................
.........................................................................................
//Ways to initialize pair.
#include <iostream>
#include <utility>
using namespace std;
//make_pair():-> This template function allows to create a value
//				 pair without writing the types explixitly.	
int main(){
	pair<int, char> p1;
	pair<string, double> p2("Hello", 1.23);
	pair<string, double> p3;
	
	p1.first = 1;
	p1.second = 'f';
	
	p3 = make_pair("Hello again", 2.4);
	
	cout<<p1.first<<endl;
	cout<<p1.second<<endl;
	cout<<p2.first<<endl;
	cout<<p2.second<<endl;
	cout<<p3.first<<endl;
	cout<<p3.second<<endl;	 
	return 0;
}

.........................................................................................
.........................................................................................
.........................................................................................
