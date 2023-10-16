#include<iostream>
using namespace std;

int factorial(int n){

    int facto=1;
    for(int i=1;i<=n;i++){
        facto=facto*i;
    }
    return facto;
    }

int nCr(int n,int r)
{
    int numer= factorial(n);
    int denom=factorial(r) * factorial(n-r);
    return numer/denom;
}

int main()
{
    int n,r;
    cout<<"enter the value of n and r"<<endl;  
    cin>>n>>r;
  
   int t= nCr(5,3);
  cout<<"the factorial-->"<< nCr(n,r);
 

}