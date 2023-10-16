#include<iostream>
#include<stack>
using namespace std;
int main(){
stack <int> f;
if(f.empty())
{
f.push(5);
f.push(6);
f.push(10);
}

if(!f.empty())
{
f.pop();
}
 
while(!f.empty()){
    cout<<"printing the element of stack-->"<<f.top();
    f.pop();
    cout<<endl;
}

}