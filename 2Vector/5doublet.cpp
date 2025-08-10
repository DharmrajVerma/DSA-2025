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
    for(int i=0;i<v.size();i++){
        for(int j=1;j<v.size()-1;j++){
            if(v[i]+v[j]==7){
                cout<<i<<","<<j<<endl;

            }
        }
    }
}