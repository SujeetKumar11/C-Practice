#include <iostream> 
#include <unordered_map>

using namespace std;
 int main()
{
int A[10]={3,6,4,3,5,6,4,5,3,5};
unordered_map<int,int> m; 
for(int i=0;i<10;i++)
{
m[A[i]]++;
}

for(auto s:m)
{
cout<<"Frequency of "<<s.first<<" is "<<s.second<<endl;
}

return 0;
}
