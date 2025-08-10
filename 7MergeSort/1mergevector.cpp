#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={1,4,5,8};
    int n1= sizeof(arr)/sizeof(arr[0]);
    vector<int> a(arr,arr+n1);
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<endl;
    }
}
