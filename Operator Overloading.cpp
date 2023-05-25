//Operator overloading means to give a special meaning to the already existing operators in the language.
//The keyword " operator " is used when we want to do operator overloading.

//We can't do operator overloading on all type of opertars, exception are the following :
// sizeof( );
// ternary ( ?: );
// dot operator ( . );
// scoper resolution operator ( :: );
#include<iostream>
using namespace std;

class base{
	int x;
	public:
		base(int a = 0){
			x = a;
		}
		base operator+(base obj){
			base res;
			res.x = x + obj.x;
			return res;
		}
		void print(){
			cout<<"The sum of the given object is "<<x<<endl;
		}
};
int main(){
	base o1(5), o2(10);
	base o3 = o1 + o2;
	o3.print();
	return 0;
}
.........................................................................................
.........................................................................................
.........................................................................................
//Using friend class to do operator overloading.
#include<iostream>
using namespace std;

class base{
	int x;
	public:
		base(int a = 0){
			x = a;
		}
		friend base operator+(base const& obj1, base const& obj2);
		void print(){
			cout<<"The sum of the given object is "<<x<<endl;
		}
};
base operator+(base const& obj1, base const& obj2){
			return base(obj1.x + obj2.x);
		}
int main(){
	base o1(5), o2(10);
	base o3 = o1 + o2;
	o3.print();
	return 0;
}
.........................................................................................
.........................................................................................
.........................................................................................
#include<iostream>
using namespace std;

class test{
	int x;
	public:
		test(int a){
			x = a;
		}
		
		test operator++(int){
			test t(x);
			++x;
			return t;
		}
		void display(){
			cout<<x<<endl;
		}
};
int main(){
	test t(10);
	t++;
	t.display();
	return 0;
}
.........................................................................................
.........................................................................................
.........................................................................................
//Program to overload '+' operator and '==' operator to check if the two matrix entered are equal.
#include<iostream>
using namespace std;

class matrix{
	int arr[5][5];
	
	public:
		void getdata(){
			int i,j;
			cout<<"Enter 3X3 matrix: ";
			for(i = 0;i<3;i++){
				for(j = 0;j<3;j++){
					cin>>arr[i][j];
				}
			}
		}
		void operator+(matrix x);
		bool operator==(matrix x);
		void display(){
			int i,j;
			for(i =0 ;i<3;i++){
				for(j=0;j<3;j++){
					cout<<arr[i][j]<<" \t";
				}
				cout<<"\n";
			}
		}
};
void matrix::operator+(matrix x){
	int mat[3][3];
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			mat[i][j] = arr[i][j] + x.arr[i][j];
		}
	}
	cout<<"Sum of the matrixes: \n";
	for(i=0;i<3;i++){
		cout<<" ";
		for(j=0;j<3;j++){
			cout<<mat[i][j]<<"\t";
		}
		cout<<"\n";
	}
}
bool matrix::operator==(matrix x){
	int i,j;
	for(i = 0;i<3;i++){
		for(j=0;j<3;j++){
			if(arr[i][j]==x.arr[i][j]){
			return true;
		}
		else{
			return false;
		}
		}
		
	}
}
int main(){
	matrix obj1, obj2;
	obj1.getdata();
	obj2.getdata();
	obj1 + obj2;
	if(obj1==obj2){
		cout<<"YEs";
	}
	else{
		cout<<"No";
	}
	return 0;
}
