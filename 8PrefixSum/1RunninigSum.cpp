#include<iostream>
using namespace std;
int main(){
    int arr[]={4,7,9,11,13};
    int n;
    n=sizeof(arr)/sizeof(arr[1]);
    int sum =0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    cout<<sum;
}
