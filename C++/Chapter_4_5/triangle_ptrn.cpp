#include<iostream>
using namespace std;
int main(){
    int i=1;
    int n;
    cin>>n;
    while(i<=n){
        int j=1;
      //  int  x=i;
        while(j<=i){
          
            cout<<i-j+1<<" ";
          //   x+=1;
            j++;
             
        }
        cout<<endl;
        i++;
    }
}
 
