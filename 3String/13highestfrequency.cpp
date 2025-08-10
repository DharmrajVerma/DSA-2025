#include<iostream>
using namespace std;
int main(){
    string s = "dharmmllllrajverma";
    int maxcount=0;
    char a;
    for(int i=0;i<s.size();i++){
        int count=1;
        char ch;
        for(int j=i+1;j<s.size();j++){
            if(s[i]==s[j]){
                count++;
                ch=s[i];
            }
        }
        if(count>maxcount){
            maxcount=count;
            a =ch;
            
        }
    }
   
    
    cout<<maxcount<<"  "<<a;
}