#include<iostream>
using namespace std;
int main(){
    int n,a=1,b=1,sum=0;
    cout<<"enter the value of n ";
    cin>>n;
    cout<<"1 1 ";
    for(int i=1;i<=n;i++){
        sum=a+b;
        a=b;
        b=sum;
        cout<<sum<<" ";
    }

}