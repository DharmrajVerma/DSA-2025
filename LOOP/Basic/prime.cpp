#include<iostream>
using namespace std;
int main(){
    int n,a=0;
    cout<<"enetr the  number ";
    cin>>n;
    for(int i=2; i<n;i++){
        if(n%i==0){
            a=1;
            break;
        }
        
    }
    if(a==0){
        cout<<"enetr no is prime";
    }
    else{
        cout<<"enetr no is composite";
    }

}