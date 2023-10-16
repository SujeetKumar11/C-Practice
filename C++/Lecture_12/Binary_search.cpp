#include<bits/stdc++.h>
using namespace std;

int Binary_search(int arr[],int n,int key){
    int init=0;
    int end=n;
    
  for(int i=0;i<n;i++)
 // while(init<=end)
  {
        int mid=init+(end-init)/2;
        if(key==arr[mid]){
            return mid;

        }
       else if(key>arr[mid]){ 
            init=mid+1;
           
        }
        else{
            end=mid-1;
        }
 

    }
    return -2;

}

int main(){
    while(1){
    int array[100];
    int size,n;
    cout<<"enter the size of array"<<endl;
    cin>>size;
    for(int i=0;i<size;i++){
        cout<<"Enter the element of index "<<i<<" element"<<endl;
        cin>>array[i];
    } 
    cout<<"Enter the element to be found"<<endl;
    cin>>n;
   int x=Binary_search(array,size,n);
   if(x==-2){
    cout<<"Element not found!!"<<endl;
   }
   else{
    cout<<"Element found at index "<<x<<endl;
   }
    }

}