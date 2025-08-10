#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    vector<int> v={5,3,1,4,2};
    for(int i=0;i<v.size();i++){
       int idx=-1;
       int min=INT_MAX;
        for(int j=i;j<v.size();j++){
            if(min>v[j]){
                min=v[j];
                idx=j;
            }
            
        }
        swap(v[i],v[idx]);
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}