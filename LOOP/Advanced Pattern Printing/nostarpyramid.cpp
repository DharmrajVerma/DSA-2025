#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for( int j=1;j<=n-i;j++){
            cout<<" ";
        }
        int a=1;
        for( int k=1;k<=i;k++){
            cout<<a;
            a++;
        }
        
        for(int l=i-1;l>=1;l--){
            cout<<l;
            
            
        } 
        cout<<endl;
    }
}