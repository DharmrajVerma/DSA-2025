#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(64);
    v.push_back(61);
    v.push_back(16);
    v.push_back(60);
    v.push_back(46);
    v.push_back(69);
    v.push_back(36);
    for (int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}