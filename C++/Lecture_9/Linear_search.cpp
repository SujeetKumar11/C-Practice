#include<bits/stdc++.h>
using namespace std;

int Linear_Search(int arr[],int size,int key){

   
    for(int i=1;i<=size;i++){
        if(key==arr[i]){
            return i;
        
        }
        
    }
    return 0;

}

int main(){
    
    int size,key;
    int array[100];
    
    cout<<"Enter the size of array"<<endl;
    cin>>size;
    for(int i=1;i<=size;i++){

        cout<<"Enter the Element"<<i<<endl;
        cin>>array[i];
    }
    cout<<"Enter the element to be searched"<<endl;
    cin>>key;
    int y= Linear_Search(array,size,key);
    if(y==0){
        cout<<"Element is not in the array";
    }
    else{
    cout<<"The elements of the array at-->"<<y<<endl;
    }
}