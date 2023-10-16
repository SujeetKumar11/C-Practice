#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the value of a:-";
    cin>>ch;
    if(ch>='a'&& ch<='z'){
        cout<<"This is lower case";
    }
    else if(ch>='A' && ch<='Z'){
    	cout<<"This is upper case";
	}
	else if(ch>='0' && ch<='9'){
		cout<<"This is numeric";
	}
	else{
		cout<<"This is doglapan";
	}
	
    return 0;
}