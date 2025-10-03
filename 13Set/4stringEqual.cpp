#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
 bool stringEqual(vector<string> v){
    int n=v.size();
        unordered_map<char,int> m;
        for(auto x : v){
            for(int i=0;i<x.size();i++){
                m[x[i]]++;
            }
        }
        for(auto a : m){
            if(a.second % n != 0) return false;
        }
        return true;
    }
int main(){
    vector<string> v={"abc", "bca", "cab"};
    cout<<stringEqual(v);
    
   
}