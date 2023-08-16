#include<iostream>
#include<utility>
using namespace std;

int main(){
	pair <int,char> p;
	p.first = 3;
	p.second = 'f';
	cout<<<p>;
	return 0;
}

// CPP program to illustrate
// auto-initializing of pair STL
#include <iostream>
#include <utility>

using namespace std;

int main()
{
	pair<int, double> PAIR1;
	pair<string, char> PAIR2;

	// it is initialised to 0
	cout << PAIR1.first<<"1";

	// it is initialised to 0
	cout << PAIR1.second<<"2";

	cout << " ";

	// // it prints nothing i.e NULL
	cout << PAIR2.first<<"3";
	
	// it prints nothing i.e NULL
	cout << PAIR2.second<<"4";

	return 0;
}
