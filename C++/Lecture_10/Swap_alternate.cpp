#include<bits/stdc++.h>
using namespace std;

void Swap_of_alternate(int arr[],int n){
    int start=1;
    int end=n;
      for(int i=1;i<n;i+=2) {
        swap(arr[i],arr[i+1]);
        
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
    
    Swap_of_alternate(array,size);
    Print_Array(array,size);
    
    
}