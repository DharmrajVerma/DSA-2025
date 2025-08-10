#include<iostream>
using namespace std;
int main(){
    int arr[]={1,3,4,6,8,9,10,12,15,18};
    int target=12;
    int lo=0;
    int hi=9;
    bool flag =false;
    while(hi>=lo){
        int mid=(lo+hi)/2;
        if(arr[mid]==target){
            flag=true;
            cout<<arr[mid-1];
             break;
        }
        else if(arr[mid]>target) hi=mid-1;
        else lo=mid+1;

    } 
    if(flag == false) cout<<arr[hi];
}