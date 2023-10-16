#include<bits/stdc++.h>
using namespace std;

int Sum_of_Array(int arr[],int size){

    int sum=0;
    for(int i=1;i<=size;i++){
        sum=sum+arr[i];
    }
    return sum;
}

int main(){
    
    int size;
    int array[100];
    
    cout<<"Enter the size of array"<<endl;
    cin>>size;
    for(int i=1;i<=size;i++){

        cout<<"Enter the Element"<<i<<endl;
        cin>>array[i];
    }
    int y= Sum_of_Array(array,size);
    cout<<"The sum of elements of the array-->"<<y<<endl;
    
}