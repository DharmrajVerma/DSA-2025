// check if array can be partioned into 2 continuous arrays of equal sum
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,4,2,3};
    int n= sizeof(arr)/sizeof(arr[1]);
    int idx=-1;
    // idx or running  sum
    for(int i=1;i<n;i++){
        arr[i]=arr[i]+arr[i-1];
    }
    for(int i=0;i<n;i++){
        
        if(2*arr[i]==arr[n-1]){
            idx=i;
            break;
        }
    }
    if(idx==-1) cout<<"not partioned";
    else cout<<"partioned at "<<idx;
}