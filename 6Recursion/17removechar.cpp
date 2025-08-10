//here remove the charcter using extra variable
#include<iostream>
using namespace std;
 void rstring(string o,string e,int &n,int i){
if(i==n){
    cout<<e;
    return;
}
 char ch=o[i];
 if(ch == 'b') return rstring(o,e,n,i+1);
 else return rstring(o,e+ch,n,i+1);

    }
int main(){
    string o="abacade";
    int n=o.size();
   rstring(o,"",n,0);
}