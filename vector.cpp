#include<iostream>
#include<vector>// are dybamic array with the abilty to resize itself automatically when a new element is added.
//Its storage is handled by containers.
using namespace std;

int main(){
	vector<int> v;
	v.push_back(1);//used to store elements in vectors. Store in the last position.
	v.push_back(2);
	v.push_back(3);
	
	for(int i = 0; i < v.size(); i++){//v.size() used to know the size of the array.
		cout<<v[i]<<endl;
	}
	return 0;	
}
.........................................................................................
.........................................................................................
.........................................................................................
#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	
	vector<int>::iterator it;//will create a iterator.
	for(it = v.begin(); it!=v.end();it++){//v.begin():-> Go to the first position of the vector.
					     //v.end():-> Go to the end of the vector.
		cout<<*it<<endl;
	}
	
	return 0;	
}
.........................................................................................
.........................................................................................
.........................................................................................
#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	
	for(auto element:v){//auto will automaticaly reconigise 'element' as a type of interger by knowing about vector 'v'.
		cout<<element<<endl;
	}
	return 0;	
}
