#include<iostream>
using namespace std;
int main(){
    int arr[]={2,8,9,12,15,3,4,5};
    int n=sizeof(arr)/sizeof(arr[1]);
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(max < arr[i]){
            max=arr[i];
        }
    }
    cout<<"largest element is "<<max<<endl;
    int smax=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>smax && arr[i] != max){
            smax=arr[i];
        }
    }
    cout<<"second largest element is "<<smax<<endl;


}