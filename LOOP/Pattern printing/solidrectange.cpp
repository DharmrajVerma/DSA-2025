#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter the row no";
    cin>>n;
    cout<<"enter rhe column no";
    cin>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"*";
        }
        cout<<endl;
    }

}