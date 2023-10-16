#include<bits/stdc++.h>
using namespace std;

int FirstOccr(int arr[],int n,int key){
    int init=0;
    int end=n-1;
    int ans=0;
  
 while(init<=end)
  {
          int mid=init+(end-init)/2;
        if(key==arr[mid]){
            ans= mid;
            end=mid-1;

        }
       else if(key>arr[mid]){ 
            init=mid+1;
           
        }
        else{
            end=mid-1;
        }
 

    }
    
   return ans;

}
int SecondOccr(int arr[],int n,int key){
    int init=0;
    int end=n-1;
    int ans=0;
    
  while(init<=end)
  {
        int mid=init+(end-init)/2;
        if(key==arr[mid]){
            ans= mid;
            init=mid+1;

        }
       else if(key>arr[mid]){ 
            init=mid+1;
           
        }
        else{
            end=mid-1;
        }
 

    }
    
    return ans;

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
   int x=FirstOccr(array,size,n);
   int y=SecondOccr(array,size,n);
   cout<<"First--->"<<x<<" "<<"Second-->"<<y<<endl;
    }

}