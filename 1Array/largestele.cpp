#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no of arr element ";
    cin>>n;
    cout<<"entr the element  ";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"your array element is ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    int l=arr[1];
    for(int i=0;i<n;i++){
        if(l<arr[i]){
            l=arr[i];
        }
    }
    cout<<"largest no is "<<l;
}