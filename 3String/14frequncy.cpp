#include<iostream>
#include<vector>
using namespace std;


int main(){
    int max=0;
    int idx=0;
    string s="dharmmmmmmrddddddaj";
    vector<int> v(26,0);
    for(int i=0;i<s.size();i++){
        char ch = s[i];
        int ascii = int(ch);
        v[ascii-97]++;
   
    }
    for(int i=0;i<v.size();i++){
        if(max<v[i]){
            max=v[i];
            idx= i;
          
        }  
    }
   
    cout<<max<<"   "<<char(idx+97); 

}