#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enetr the value of n ";
    cin>>n;
    m=n-1;
    int a=1;
     
    for(int i=1;i<=m;i++){
      int  b=i;
        for(int j=1;j<=m+1-i;j++){
            cout<<j;
            b=j;

        }
        for(int k=1;k<=a;k++){
            cout<<" ";
            b++;

        }
        for(int l=1;l<=m+1-i;l++){
            cout<<b+l;
        }
        a+=2;
        cout<<endl;
    }
}