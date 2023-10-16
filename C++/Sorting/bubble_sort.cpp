#include<bits/stdc++.h>
using namespace std;
int bubble_sort(int arr[],int n){
    int swapp=-1;
    for(int i=0;i<n-1;i++){
        
        for(int j=0;j<n-i-1;j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapp++;
            }
        }
    }
    return swapp;
}

int main(){
int array[7]={8, 22, 7, 9, 31, 5, 13};
int x=bubble_sort(array,7);
cout<<x;
}