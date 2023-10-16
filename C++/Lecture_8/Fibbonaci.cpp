#include<iostream>
using namespace std;

void fibonacci(int n){
    int first=0;
    int second=1;
    int ans;
    cout<<first<<" "<<second<<" ";
    for(int i=1;i<=n;i++){
        ans= first+second;
        first=second;
        second=ans;
        cout<<ans<<" ";
    }

}

int main(){

int n;
cout<<"enter the nth term"<<endl;
cin>>n;
fibonacci(n);

}