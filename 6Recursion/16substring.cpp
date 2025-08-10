#include<iostream>
using namespace std;
void subset(string o,string e){
    if(o.length()==0){
        cout<<e<<" ";
        return;
    }
    
    char ch=o[0];
    
    subset(o.substr(1),e+ch);
    subset(o.substr(1),e);
    
}
int main(){
subset("abc","");
}