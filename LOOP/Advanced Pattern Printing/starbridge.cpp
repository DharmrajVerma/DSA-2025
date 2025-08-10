#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enetr the value of n ";
    cin>>n;
    m=n-1;
    for(int l=1;l<=2*n-1;l++){
        cout<<"*";
    }
    cout<<endl;
    int a=1;
        for(int i=1;i<=m;i++){
            for(int j=1;j<=m+1-i;j++){
                cout<<"*";
            }
            
            for(int j=1;j<=a;j++){
                cout<<" ";
            }
            a+=2;
            for(int k=1;k<=m+1-i;k++){
                cout<<"*";
            }
            cout<<endl;


        }
    

}