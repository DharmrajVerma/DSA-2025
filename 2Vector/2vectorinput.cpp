#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cout<<"enter no of element ";
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    cout<<"your enter element is ";
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

}
