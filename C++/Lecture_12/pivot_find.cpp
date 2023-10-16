#include<bits/stdc++.h>
using namespace std;

void Testing(int arr[],int n){
    int start=0;
    int end=n-1;
    int sum=0;

   while(start<=end) {
  cout<<arr[end];
  //sum=sum+arr[end];
    end--;
     
   }
//cout<<sum;
}

int main(){
 int array[6]={2,3,4,9,7,2};
 Testing(array,6);


}