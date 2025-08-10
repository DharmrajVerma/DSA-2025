//most frequent word in given string and also no of count
#include<iostream>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
    string s="I am zz zz  dharmraj verma and I am irrugular student of dsa";
    stringstream ss(s);
    vector<string> v;
    string temp;
    while(ss>>temp){
        v.push_back(temp);
    }
   
    sort(v.begin(),v.end());
    int mx=1,mxc=1;
    string freq;

    for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]){
            mx++;
           
        }
        else{
            mx=1;
        }
        mxc=max(mx,mxc);
    }
    mx=1;
    for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]){
            mx++;
            freq=v[i-1];

        }
        else mx=1;
        if(mx==mxc){
            cout<<mxc<<" "<<freq<<endl;
        }
    }
   

}