#include<iostream>
using namespace std;
void pow(int e,int b, int &ans){
    
    if(e==0){
        ans=1;
        return;
    }
        
         
    
    pow(e-1,b,ans);
    ans=ans*b;
    
   
}
int main(){
    int r;
    pow(2,5,r);
    cout<<r;
}
   