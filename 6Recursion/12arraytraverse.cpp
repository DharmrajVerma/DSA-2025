#include<iostream>
using namespace std;
void traverse(int arr[],int &n,int idx){
    if(idx==n) return;
    else{
        cout<<arr[idx]<<" ";
        traverse(arr,n,idx+1);
    }

}
int main(){
    int arr[]={2,4,5,6,7,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    traverse(arr,n,0);
    
}