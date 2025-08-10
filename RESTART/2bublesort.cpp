#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v= {5,54,13,21,1};
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v.size();j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
            }
        }
    }
    cout<<"after shorting of element "<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }

}