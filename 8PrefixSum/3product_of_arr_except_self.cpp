#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[1]);
    int r[n];
    int ans[n];
    int product=1;
    for(int i=0;i<n;i++){
      product=product*arr[i];
    }
    for(int i=0;i<n;i++){
        ans[i]=product/arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}