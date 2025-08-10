#include<iostream>
using namespace std;
int main(){
    int ld,rn=0,n;
    cout<<"enetr the number ";
    cin>>n;
    while(n>0){
    ld=n%10;
    rn=rn*10;
    rn=rn+ld;
    n=n/10;
    }
    cout<<"reverse number is "<<rn;

}