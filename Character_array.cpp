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
