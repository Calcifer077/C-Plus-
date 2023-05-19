The useful classes for working with files in c++ are:
1. fstream --> base
2. ifstrem --> derived from fstream
3. ofstrem --> derived from fstream

In order to work with files in c++, you will have to open it.
Primarily, there are 2 ways to open a file:
1. Using costructor
2. Using the member function open() of the class
.........................................................................................
.........................................................................................
.........................................................................................
#include<iostream>
#include<fstream>
using namespace std;


int main(){
	ofstream fout("sample.txt");//Creating an object of ofstream which is used to write in a file
	string st = " Hello world";
	fout<<st;//using that object to print that in the file
	return 0;
} 
.........................................................................................
.........................................................................................
.........................................................................................
#include<iostream>
#include<fstream>
using namespace std;


int main(){
	ifstream fin("sample.txt");//making an object of ifstrem which is used to read in a file.
	string st;
	//fin>>st;//If we run this line it will only print the output of the first word.
	getline(fin, st);//This line can read a full line.
  //If we were to read more than one line we will have to use more getline fuction.
  // syntax       getline( object, where_to_store_data)
	cout<<st;
	return 0;
}
.........................................................................................
.........................................................................................
.........................................................................................
//samething as above.
#include<iostream>
#include<fstream>
using namespace std;


int main(){
	ifstream fin;
	string st;
	fin.open("sample.txt");//opening the file here
	getline(fin, st);
	cout<<st;
	fin.close();//closing that file here.
	return 0;
}
.........................................................................................
.........................................................................................
.........................................................................................
//Cpoying content from one file and writing into another.
#include<iostream>
#include<fstream>
using namespace std;


int main(){
	ifstream fin;
	ofstream fout;
	fin.open("Sample.txt");
	string st;
	getline(fin, st);
	cout<<st;
	fin.close();
	fout.open("Sample1.txt");
	fout<<"This is the second file in which we are copying the content"<<endl;
	fout<<st;
	fout.close();
	return 0;
}
