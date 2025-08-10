#include<iostream>
using namespace std;
#include<vector>
int main(){
    vector<int> v={5,4,3,2,1};
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    for(int i=0;i<v.size();i++){
        int min = INT16_MAX;
        int idx=-1;
        for(int j=i;j<5;j++){
            if(v[j]<min){
                min=v[j];
                idx=j;
            }
            
        }
        swap(v[i],v[idx]);
    }
    cout<<endl<<"after sorting"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

}