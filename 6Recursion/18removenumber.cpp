#include<iostream>
#include<vector>
using namespace std;
void rdup(vector<int> &o,vector<int> &e,int idx){
    if(idx==o.size()){
        for(int i=0;i<e.size();i++){
            cout<<e[i]<<" ";
        }
        return;
    }
    if(o[idx]==1) rdup(o,e,idx+1);
    else{
        e.push_back(o[idx]);
        rdup(o,e,idx+1);
    }

}
int main(){
    vector<int> v={1,2,3,1,2,4,1,5,6,2,7,1,3};
    vector<int> e={};
    rdup(v,e,0);
    
}