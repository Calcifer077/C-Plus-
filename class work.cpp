#include<iostream>
using namespace std;

class matrix{
	int arr[5][5];
	
	public:
		void getdata(){
			int i,j;
			cout<<"ENTER A THREE BY THREE MATRIX:"<<endl;
			for(i=0;i<3;i++){
				for(j=0;j<3;j++){
					cin>>arr[i][j];
				}
			}
		}
		void operator +(matrix x);
		void display(){
			int i,j;
			for(i=0;i<3;i++){
				cout<<" ";
				for(j=0;j<3;j++){
					cout<<arr[i][j]<<" \t ";
				}
				cout<<" \n ";
			}
		}
};
void matrix::operator +(matrix x){
			int mat[3][3];
			int i,j;
			for(i=0;i<3;i++){
				for(j=0;j<3;j++){
					mat[i][j] = arr[i][j] + x.arr[i][j]; 
				}
			}
			cout<<"SUM OF THE MATRIX"<<endl;
			for(i=0;i<3;i++){
				cout<<" ";
				for(j=0;j<3;j++){
					cout<<mat[i][j]<<" \t ";
				}
				cout<<" \n ";
			}
		}
int main(){
	matrix obj1, obj2;
	obj1.getdata();
	obj2.getdata();
	cout<<"FIRST MATRIX \n";
	obj1.display();
	cout<<"SECOND MATRIX \n";
	obj2.display();
	obj1 + obj2;
	return 0;
}






















#include<iostream>
using namespace std;

class demo{
	int a;
	public:
	demo(int a){
		
..............
	
	
	
	
	?
	
	
	
	...............
#include<iostream>
#include<fstream>
using namespace std;

int main(){
	ofstream fout;
	fout.open("TEXT23.txt");
	fout<<"Hello there";
	fout.close();
	return 0;
}
		
		
		
		
		
#include<iostream>
#include<fstream>
using namespace std;

int main(){
	ofstream fout;
	string name;
	cout<<": ";
	cin>>name;
	fout.open("TEXT.txt");
	fout<<name;
	fout.close();
	return 0;
}		

		
		
		
		
#include<iostream>
#include<fstream>
using namespace std;

int main(){
	ofstream fout;
	string name[30];
	int uid[30], section[30];
	int size;
	cout<<"Enter the number of the students: ";
	cin>>size;
	for(int i = 0;i<size;i++){
		cout<<"Enter name of the student "<<i+1<<" : ";
		cin>>name[i];
		cout<<"Enter uid of the student: "<<i+1<<" : ";
		cin>>uid[i];
		cout<<"ENter section of the student: "<<i+1<<" : ";
		cin>>section[i];
	}
	fout.open("TEXT.txt");
	for(int i = 0 ;i<size;i++){
		fout<<"Name of the student "<<i+1<<" = "<<name[i]<<endl;
		fout<<"UID of the student "<<i+1<<" = "<<uid[i]<<endl;
		fout<<"Section of the student "<<i+1<<" = "<<section[i]<<endl;
	
	}
	fout.close();
	return 0;
}
		
		
//OUTPUT OF THE ABOVE PROGRAM:
Name of the student 1 = Mahesh
UID of the student 1 = 12691
Section of the student 1 = 412
Name of the student 2 = rahul
UID of the student 2 = 10755
Section of the student 2 = 412
		
