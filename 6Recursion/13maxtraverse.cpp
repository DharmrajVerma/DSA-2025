#include<iostream>
#include<climits>
using namespace std;
void maxx(int arr[],int &m,int n,int idx){
    if(idx==n){
        cout<<m;
        return;
    } 
    
    if(arr[idx]>m){
        m=arr[idx];
    }
   
     maxx(arr,m,n,idx+1);
   
       
}
int main(){
    int arr[]={2,5,1,9,4,8};
    int n=sizeof(arr)/sizeof(arr[1]);
    int m=INT_MIN;
    maxx(arr,m,n,0);
   

}