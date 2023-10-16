#include<bits/stdc++.h>
using namespace std;

void Reverse_of_Array(int arr[],int size){
    int start=1;
    int end=size;
     while(start<=end) {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void Print_Array(int arr[],int size){
    for(int i=1;i<=size;i++){
        cout<<arr[i]<<" ";
    }
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
    
    Reverse_of_Array(array,size);
    Print_Array(array,size);
    
    
}