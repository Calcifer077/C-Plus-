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
