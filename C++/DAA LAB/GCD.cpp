#include <iostream> 
using namespace std;

int gcd(int a, int b)
{
if(a==0||b==0)
{
return 0;
}
else if(a>b)
{
return gcd(a-b,b);
}
else if(b>a)
{
return gcd(a,b-a);
}
else
{
return a;
}
}

int main()
{
int a,b; cout<<"Enter a : "; 
cin>>a; cout<<"Enter b : "; 
cin>>b;
int r=gcd(a,b);
cout<<"Greatest Common Divisor is "<<r<<endl; 
cout<<"SUJEET KUMAR"<<endl<<"21BCS1598";
return 0;
}
