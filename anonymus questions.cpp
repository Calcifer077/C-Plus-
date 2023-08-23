//to print a factorial of a number:
#include<iostream>

using namespace std;

int main(){
	int n;
	int product =1;
	cin>>n;
	for(int i=1;i<=n;i++){
		product = product * i;
	}
	cout<<" "<<product;
	return 0;
}
.........................................................................................
.........................................................................................
.........................................................................................
//Write a program to count upper case, lower case, speical characters, numeric values, blank spaces in a given string.
#include<iostream>
using namespace std;

int main(){
    string str = "CSE_Dep@rtment CS_201";
    cout<<str<<endl;
    int len = str.length();
    cout<<len<<endl;
    int lower = 0;
    int upper = 0;
    int special = 0;
    int numeric = 0;
    int spaces = 0;
    for(int i = 0; i < len; i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            lower++;
        }
        else if(str[i] >= 'A' && str[i] <= 'Z'){
            upper++;
        }
        else if(str[i] == ' '){
            spaces++;
        }
        else if(str[i] >= '0' && str[i] <= '9'){
            numeric++;
        }
        else{
            special++;
        }
    }
    cout<<"The number of upper cases is "<<upper<<endl;
    cout<<"The number of lower cases is "<<lower<<endl;
    cout<<"The number of numeric values is "<<numeric<<endl;
    cout<<"THe number of spaces is "<<spaces<<endl;
    cout<<"The number of special character is "<<special<<endl;
    return 0;
}
.........................................................................................
.........................................................................................
.........................................................................................
//Program to reverse a string.
#include<iostream>
using namespace std;

void swap(string str1, string str2){
    string temp;
    temp = str1;
    str1 = str2;
    str2 = temp;
}

int main(){
    string str = "Hello world!";
    cout<<str<<endl;
    int len = str.length();
    cout<<len<<endl;
    
    for(int i = 0; i < len / 2; i++){
        swap(str[i], str[len - 1 - i]);
    }
    for(int i = 0; i< len; i++){
        cout<<str[i];
    }
    return 0;
}
