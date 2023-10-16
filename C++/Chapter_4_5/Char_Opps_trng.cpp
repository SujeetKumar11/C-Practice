#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    char x='A';
    while(i<=n){
        int j=1;
        while(j<=i){
         x='A'+n-i+j-1;
         cout<<x<<" ";
         j++;
        }
        i++;
        cout<<endl;
    }
}
/*task----------
D
CD
BCD
ABCD
*/