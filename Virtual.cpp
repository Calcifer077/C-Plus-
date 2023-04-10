#include<iostream>
using namespace std;

class student{
	protected:
		int roll_no;
	public:
		void setnumber(int a){
			roll_no = a;
		}
		void printnumber(){
			cout<<"Your roll no is "<<roll_no<<endl;
		}
};
class test:virtual public student{
	protected:
		int maths, physics;
	public:
		void setmarks(int b, int c){
			maths = b;
			physics = c;
		}
		void displaymarks(){
			cout<<"Your maths marks is "<<maths<<endl;
			cout<<"Your physics marks is "<<physics<<endl;
		}
};
class sports:virtual public student{
	protected:
		int score;
	public:
		void getscore(int d){
			score = d;
		}
		void displayscore(){
			cout<<"Your sports score is "<<score<<endl;
		}
};
class result:public test, public sports{
	protected:
	int result;
	public:
	void display(){
		result = maths + physics + score;
		printnumber();
		displaymarks();
		displayscore();
		cout<<"YOur total marks is "<<result<<endl;
	}
};
int main(){
	result obj1;
	obj1.setnumber(1);
	obj1.setmarks(10,20);
	obj1.getscore(30);
	obj1.display();
	return 0;
}
