#include<iostream>
using namespace std;
int main(){
    int arr[]={2,8,9,12,15,3,4,5};
    int n=sizeof(arr)/sizeof(arr[1]);
    int a,s=0;
    cout<<"enetr the no ";
    cin>>a;
    for(int i=0;i<n;i++){
            if(a<arr[i]){
                s++;
            }
    }
    cout<<"no of greater element is "<<s;

}