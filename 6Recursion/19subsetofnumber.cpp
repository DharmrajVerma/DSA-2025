#include<iostream>
#include<vector>
using namespace std;
void subset(vector<int> o,vector<int> e, int idx){
    if(idx==o.size()){
        for(int i=0;i<e.size();i++){
            cout<<e[i];
        }
        cout<<endl;
        return;
    }
    subset(o,e,idx+1);
    e.push_back(o[idx]);
    subset(o,e,idx+1);

}
int main(){
 vector<int> v={1,2,3};
 vector<int> e;
 subset(v,e,0);
