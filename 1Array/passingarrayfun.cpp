#include<iostream>
using namespace std;
void display(int a[], int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int arr[5]={4,5,8,13,15};
    int n=sizeof(arr)/sizeof(arr[1]);
    display(arr,n);
}