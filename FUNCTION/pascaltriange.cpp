#include<iostream>
using namespace std;
int fact(int n){
    int f=1;
    // for(int i=1;i<=n;i++){
    //     f=f*i;
    // }
    // return f;
    while(n>0){                        
        f=f*n;
        n--;
    }
    return f;
    
}
int combination(int n,int r){
    int comb=fact(n)/(fact(r)*fact(n-r));
    return comb;
}
int main(){
    int n;
    cout<<"enter the value of n ";
    cin>>n;
    //  cout<<"enter the value of r ";
    // cin>>r;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout<<combination(i,j)<<" ";
        }
        cout<<endl;
    }

}