#include<iostream>
using namespace std;
void sum(int arr[],int n){
    static int s=0;
    if(n==0){
        cout<<"sum is "<<s;
         return;
    }
     s=s+arr[n-1];
    sum(arr,n-1);
}
int summ(int arr[],int n){
    if(n==0) return 0;
    return arr[n-1]+summ(arr,n-1);
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    sum(arr,n);
    cout<<"------------------"<<summ(arr,n);
}