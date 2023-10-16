#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"option daal"<<endl<<"1.aapna naam ke liye"<<endl<<"2.apna surname ke liye"<<endl;
    cin>>a;
    switch(a){
        case 1:
        cout<<"sujeet";
        break;
        case 2:
        cout<<"kumar";
        break;
        default:
        cout<<"kuch shi daal le";
    }
}