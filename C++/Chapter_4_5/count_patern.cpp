#include<iostream>
using namespace std;
int main(){
    int i=1;
    int n;
    int x=1;
    cin>>n;
    while(i<n){
        int j=1;
        while(j<n){
              
            cout<<x<<"  ";
             x+=1;
            j++;
        }
        cout<<endl;
        i=i+1;
    }
}
 
