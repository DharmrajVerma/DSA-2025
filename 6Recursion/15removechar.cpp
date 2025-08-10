#include<iostream>
using namespace std;
void rchar(string o,string ans ){
    if(o.length()==0){
        cout<<ans;         
        return;
    }
   char ch=o[0];
   if(ch=='a') rchar(o.substr(1),ans);
   else rchar(o.substr(1),ans+ch);

}
int main(){
    string o="dabacae";
    string ans="";
    rchar(o,ans);
}