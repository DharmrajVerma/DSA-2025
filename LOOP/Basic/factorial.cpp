#include<iostream>
using namespace std;
int main(){
    int n,a,f=1;
    
    cout<<"enter the number ";
    cin>>n;
    a=n;
    while(n>0){
        f=f*n;
        n=n-1;
    }
    cout<<"factorial of the "<<a<<" is "<<f;

}