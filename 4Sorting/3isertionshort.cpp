#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
vector<int> v={6,9,12,14,15,8,13};
display(v);
for(int i=0;i<v.size()-1;i++){
    for(int j=i+1;j>0;j--){
        if(v[j]<v[j-1]){
            swap(v[j],v[j-1]);
        }
    }
}
display(v);
}