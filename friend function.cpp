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
