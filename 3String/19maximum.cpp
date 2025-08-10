//use of stoi function 
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<string> s={"00123","0023","456","00182","00940","002901"};
    int maxx=stoi(s[0]);
    string idx;
    int ix=0;
    for(int i=1;i<s.size();i++){
        int x=stoi(s[i]);
        
        if(maxx<x){
            maxx=x;
            idx=s[i];
            ix=i;
        }
    }
    cout<<maxx<<" "<<idx<<"  "<<ix;
}