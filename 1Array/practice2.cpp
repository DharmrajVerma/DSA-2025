//             passing array in function
#include<iostream>
using namespace std;
void display(int a[],int n){
    for(int i=0;i<=n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

}
void change(int a[]){
    a[2]=5;
}
int main(){
    int arr[]={13,4,17,9,11,21,19};
    int n=sizeof(arr)/sizeof(arr[1]);
    display(arr,n);
    change(arr);
    display(arr,n);
}