#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
       }
}
int main(){
    int idx=-1;
    vector<int> v={1,2,5,7,8,0,0};
    display(v);
    
    for(int i=v.size()-1;i>0;i--){
        if(v[i-1]<v[i]){
            idx=i-1;
            break;
        }
    }
    for(int j=v.size()-1;j>=0;j++){
        if(v[j]>v[idx]){
            swap(v[j],v[idx]);
            break;
        }

    }
    
    reverse(v.begin()+idx+1,v.end());
    cout<<endl;
    display(v);
  

}
