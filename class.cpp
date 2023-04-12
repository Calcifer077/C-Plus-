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
		
