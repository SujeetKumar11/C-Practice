#include<iostream>
using namespace std;
int main(){
    int i=1;
    int n;
    
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=i){
              char x ='A'+i-1;
            cout<<x<<"  ";
              
            j++;
        }
        cout<<endl;
        i=i+1;
    }
}
/*output===
'A'+i-1='A'
A ---1+1-1=1
BB---2+1-1=2,2+2-1=3
CCC--3+1-1=3,3+2-1=4,3+3-1=5

*/
 
