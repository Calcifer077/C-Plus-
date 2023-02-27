//using friend function to sum two complex number
#include<iostream>

using namespace std;
class Complex{
    int a, b;
    friend Complex sumComplex(Complex o1, Complex o2);
    public:
        void setNumber(int n1, int n2){
            a = n1;
            b = n2;
        }

        void printNumber(){
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

Complex sumComplex(Complex o1, Complex o2){
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b+o2.b));
    return o3;
}

int main(){
	Complex c1, c2,sum;
	c1.setNumber(1,5);
	c2.setNumber(8,4);
	sum = sumComplex(c1, c2);
	sum.printNumber();
}
.......>
//using friend function to add two numbers
#include<iostream>

using namespace std;

class number{
	int a;
	public:
		void getdata(int m){
			a = m;
		}
		void display(){
			cout<<"Your number is "<<a;
		}
		friend number sumnumber(number o1, number o2);
};
number sumnumber(number o1, number o2){
	number o3;
	o3.getdata(o1.a + o2.a);
	return o3;
}
int main(){
	number c1,c2,sum;
	int a,b;
	cout<<"Enter two numbers:";
	cin>>a>>b;
	c1.getdata(a);
	c2.getdata(b);
	sum = sumnumber(c1, c2);
	sum.display();
	return 0;
}
........>
