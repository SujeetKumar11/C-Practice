#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
      int j=1;
      while(j<=n-i+1){
        cout<<j<<" ";
        j++;
      }

       int si=1;
      while(si<=i){
       
             int sj=1;
         while(sj<=i-si){
       
             cout<<"*"<<" ";
         
       sj++;
      }
       si++;
      }
       
      

     i++;
      cout<<endl;
      }
      
      
    
}