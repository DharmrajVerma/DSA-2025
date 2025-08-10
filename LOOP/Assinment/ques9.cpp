#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        char a='A';
        for(int k=1;k<=i;k++){
            cout<<a;
            a++;
        
        }
        cout<<endl;
    }
}