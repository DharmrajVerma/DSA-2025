#include<iostream>
using namespace std;
int main(){
    float a,b;
    char s;
    cout<<"enter the operation ";
    cin>>a>>s>>b;
    if(s=='+') cout<<a+b;
    else if(s=='-') cout<<a-b;
    else if(s=='*') cout<<a*b;
    else if(s=='/') cout<<a/b; 
}
