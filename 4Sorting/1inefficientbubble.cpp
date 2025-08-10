#include<iostream>
#include<vector>
using namespace std;
int main(){
   
    vector<int> v={5,3,2,4,1};   
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v.size()-1;j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
            }
        }
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}