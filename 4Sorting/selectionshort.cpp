#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v={5,3,1,2,4};
    for(int i=0;i<v.size()-1;i++){
        for(int j=i+1;j<v.size();j++){
            if(v[i]>v[j]){
                swap(v[i],v[j]);
            }
        }
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
