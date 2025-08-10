#include<iostream>
using namespace std;
int main(){
    int n,r,a=1;
    
    cout<<"enter the value of n ";
    cin>>n;
    cout<<"enetr the value of r ";
    cin>>r; 
    int b=n-r,c=1;


    while(n>0){
        a=a*n;
        n--;
    }
    while(b>0){
        c=c*b;
        b--;
    }
     
    
    cout<<"permutation is "<<a/c<<endl;
    
}