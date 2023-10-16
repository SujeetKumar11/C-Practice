#include <iostream> 
#include <stack> 
using namespace std; 
int main() {

stack<int> st; 
st.push(11);
st.push(56);
st.push(35);
st.push(80);
st.push(55);
st.push(66);
st.push(78);

st.pop();
st.pop();
cout<<"Size of the stack is "<<st.size()<<endl; 
while(!st.empty())
{
cout<<st.top()<<endl; 
st.pop();
}
cout<<"SUJEET KUMAR"<<endl<<"21BCS1598";
return 0;
}
