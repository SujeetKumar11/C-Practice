#include<iostream>
using namespace std;

void Arrayprint(int arr[],int n){
    for(int j=0;j<=n;j++){
        cout<<arr[j]<<" ";
    }

}

int main(){
    int n;
    cin>>n;
    int array[100];
   for(int i=0; i<=n;i++){
    cin>>array[i];
   }
   Arrayprint(array,n);

}
