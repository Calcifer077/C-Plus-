//Character array is just a group of characters.
//The last element of this type of array is a NULL.
#include<iostream>
using namespace std;

 
int main(){
	char arr[100] = "Apple";
	int i = 0;
	
	while(arr[i] != '\0'){
		cout<<arr[i]<<endl;
		i++;
	} 
	return 0;
}
.........................................................................................
.........................................................................................
.........................................................................................
#include<iostream>
using namespace std;

 
int main(){
	//Check palindrome;
	int n;
	cin>>n; 
	char arr[n+1];
	cin>>arr;
	
	bool check = 1;
	for(int i = 0; i < n; i++){
		if(arr[i] != arr[n-1-i]){
			check = 0;
			break;
		}
	}
	
	if(check == 1)
		cout<<"The given number is a palindrome."<<endl;
	
	else
		cout<<"The given number is not a palindome."<<endl;
	return 0;
}
.........................................................................................
.........................................................................................
.........................................................................................
#include<iostream>
using namespace std;
 
int main(){
	//Find the largest word in a sentence;
	int n;
	cin>>n;
	cin.ignore();
	char arr[n+1];
	cin.getline(arr, n);//will take the input of the whole line.
	cin.ignore();
	
	int i = 0;
	int len = 0,max = 0;
	int start = 0, maxstart = 0;
	while(1){
		if(arr[i] == ' ' || arr[i] =='\0'){
			if(len > max){
				max = len;
				maxstart = start;
			}
			len = 0;
			start = i+1;
		}
		else
		len++;
		if(arr[i] == '\0'){
			break;
		}
		i++;
	}
	
	cout<<max<<endl;
	for(int i = 0;i<max;i++){
		cout<<arr[i+maxstart];
	}
	return 0;
}
.........................................................................................
.........................................................................................
.........................................................................................
