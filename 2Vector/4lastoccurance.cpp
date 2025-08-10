#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a=-1;
    vector<int> v;
    v.push_back(64);
    v.push_back(61);
    v.push_back(16);
    v.push_back(60);
    v.push_back(46);
    v.push_back(69);
    v.push_back(36);
    v.push_back(60);
    v.push_back(46);
    v.push_back(69);
    for(int i=v.size()-1;i>=0;i--){
        if(v[i]==60){
            a=i;
            break;
        }
    }
    cout<<"last occurance of 60 is "<<a+1;
}
