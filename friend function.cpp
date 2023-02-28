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
#include<iostream>

using namespace std;
class number;//forward declaration otherwise complier will say where is number class when we are using it in the calculator function.
class calculator{
	public:
		int add(int a, int b){
			return (a+b);
		}
		int sumreal(number, number);//no objects declared here.
}; 
class number{
	int a,b;
	friend int calculator::sumreal(number o1, number o2);//making the friend function so that calculator can access private data of number class.
	// also with the datatype of the function which we will use.
	public:
		void setnumber(int n1, int n2){
			a = n1;
			b = n2;
		}
		void display(){
			cout<<"Your number is "<<a<<" + "<<b;
		}
};
int calculator::sumreal(number o1, number o2){
	return ((o1.a + o2.a));
}//definition of the function here because we can't use objects above.
int main(){
	number c1,c2;
	c1.setnumber(3,4);
	c2.setnumber(5,6);
	calculator calc;//creating a object of calculator function to store the data of the same data type. 
	int res = calc.sumreal(c1,c2);
	cout<<"SUm of the real part of the number is"<<res<<endl;
	return 0;
}
