#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enetr the value of n ";
    cin>>n;
    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=2*n-1;j++){
            int i1=i;
            int j1=j;
            if(i1>n) i1=2*n-i;
            if(j1>n) j1=2*n-j;
            //cout<<min(i1,j1);
            int x=min(i1,j1);
            cout<<n+1-x;
            
        }
        cout<<endl;
    }
}