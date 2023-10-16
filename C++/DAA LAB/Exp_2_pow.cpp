#include <iostream>
using namespace std;

int power(int x, int y){
    int temp;
    if(y==0){
        return 1;
    }
    temp = power(x,y/2);
    if(y % 2 == 0)
        return temp*temp;
    else
        return x * temp * temp;

    if(x == 0){
        return x;
    }         
}

int main() {
    cout<< power(2,5)<<endl;

    return 0;

}