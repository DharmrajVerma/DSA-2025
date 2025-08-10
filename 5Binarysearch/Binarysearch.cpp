#include<iostream>
using namespace std;
int main(){
    int arr[]={1,3,4,6,8,9,10,12,15,18};
    int target=18;
    int lo=0;
    int hi=9;
    while(hi>=lo){
        int mid=(lo+hi)/2;
        if(arr[mid]==target){
            cout<<mid;
             break;
        }
        else if(arr[mid]>target) hi=mid-1;
        else lo=mid+1;

    } 
}