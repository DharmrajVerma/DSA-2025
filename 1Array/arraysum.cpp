#include<iostream>
using namespace std;
int main(){
    int  n,s=0;
    cout<<"enter the value of n ";
    cin>>n;
    int arr[n];
    cout<<"enetr the element in the array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        s=s+arr[i];
    }
    // for(int i=0;i<n;i++){
        
    //     s=s+arr[i];
    // }
    
    cout<<endl<<"sum "<<s;
}