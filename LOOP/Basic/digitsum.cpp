#include<iostream>
using namespace std;
int main(){
    int n,a;
    cout<<"enter the number ";
    cin>>n;
    int s=0; 
    while(n>0){
        a=n%10;
        s=s+a;
        n=n/10;
    }
    cout<<"sum of the digit is "<<s;
}