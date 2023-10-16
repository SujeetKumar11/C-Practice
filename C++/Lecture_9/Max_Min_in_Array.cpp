#include<bits/stdc++.h>
using namespace std;

int Maximum(int arr[],int size){
    int greater=INT_MIN;
    for(int i=1;i<=size;i++){

    greater=max(greater,arr[i]);
    }
    return greater;
}

int Minimum(int arr[], int size){
    int smaller=INT_MAX;
    for(int i=1;i<=size;i++){

        smaller=min(smaller,arr[i]);
    }
    return smaller;
}


int main(){
int size;
cout<<"Enter the size of Array"<<endl;
cin>>size;
int array[100];
for(int i=1;i<=size;i++){
    cout<<"Enter the value "<<i<<endl;
    cin>>array[i];
}
int x=Maximum(array,size);
int y=Minimum(array,size);

cout<<"Maximum value-->"<<x<<" "<<" Minimum value-->"<<y<<endl;

}