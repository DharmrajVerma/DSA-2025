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
    int l=arr[0];
    int s=arr[0];
    for(int i=0;i<n;i++){
        if(l<arr[i]){
            l=arr[i];
           
        }
    }
    for(int i=0;i<n;i++){
        if(s<arr[i] && arr[i]!=l){
            s=arr[i];
        }
    }
    cout<<" second largest element is "<<s;
}
    