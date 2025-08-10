#include<iostream>
using namespace std;
int pow(int x, int y){
    if(y==0){
        return 3;
    }
    return x*pow(x,y-1);
}
int main(){
    cout<<pow(2,4);
}