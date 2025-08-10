#include<iostream>
#include<vector>
using namespace std;
int main(){
    string s="page";
    string t="cage";
    vector<int> v(150,1000);
    
   bool a= true;
    for(int i=0;i<s.size();i++){
        int idx=(int)s[i];
        if(v[idx]==1000){
            v[idx]=s[i]-t[i];
        }
        else if(v[idx]!=s[i]-t[i]){
           a = false;
           break;
        }

    }
    for(int i=0;i<v.size();i++){
        v[i]=1000;
    }
    for(int i=0;i<s.size();i++){
        int idx=(int)t[i];
        if(v[idx]==1000){
            v[idx]=t[i]-s[i];
        }
        else if(v[idx] != t[i]-s[i]){
            a=false;
            break;
        }
    }
    if(a==true) cout<<"isomorphic";
    else cout<<"Not isomorphic";
         

}