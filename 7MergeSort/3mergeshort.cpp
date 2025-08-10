#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int> &a, vector<int> &b,vector<int> &res ){
    int i=0;
    int j=0;
    int k=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]){
            res[k++]=a[i++];
        }
        else{
             res[k++]=b[j++];
        }
    }
    if(i==a.size()){
        while(b.size()>j){
            res[k++]=b[j++];
        }
    }
    if(j==b.size()){
        while(a.size()>i){
            res[k++]=a[i++];
        }
    }
}
void conquer(vector<int> &a){
    int n=a.size();
    int n1=n/2;
    int n2=n-n/2;
    vector<int> v1(n1);
    vector<int> v2(n2);
    if(n==1) return;
    for(int i=0;i<n1;i++){
        v1[i]=a[i];
    }
    for(int i=0;i<n2;i++){
        v2[i]=a[i+n1];
    }
    conquer(v1);
    conquer(v2);
   merge(v1,v2,a);
}
int main(){
 vector<int> v={2,9,4,7,11,3,8};
 conquer(v);
 for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
 }
}