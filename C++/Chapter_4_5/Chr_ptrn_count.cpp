#include<iostream>
using namespace std;
int main(){
    int i=1;
    int n;
    
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=i){
              char x ='A'+i+j-2;
            cout<<x<<"  ";
              
            j++;
        }
        cout<<endl;
        i=i+1;
    }
}
 
