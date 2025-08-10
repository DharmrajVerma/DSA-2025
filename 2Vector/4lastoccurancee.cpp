#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(2);
    v.push_back(4);
    v.push_back(3);
    v.push_back(4);
    v.push_back(1);
    v.push_back(6);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    for(int i=v.size()-1;i>=0;i--){
        if(v[i]==1){
            cout<<"last occurance of 1 is "<<i+1;
            break;
        }
    }
}