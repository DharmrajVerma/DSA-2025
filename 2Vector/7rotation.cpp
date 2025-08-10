#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;  
}
void swap(vector<int> &a,int x,int y){
    int i=x,j=y;
    while(i<j){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
}

int main(){
    vector<int> v;
    int k;
    v.push_back(1);
    v.push_back(3);
    v.push_back(2);
    v.push_back(4);
    v.push_back(3);
    v.push_back(4);
    v.push_back(1);
    v.push_back(6);
    display(v);
    cout<<endl<<"enetr the no of value you rotate ";
    cin>>k;
    k=k%(v.size());
    swap(v,0,v.size()-1-k);
    swap(v,v.size()-k,v.size()-1);
    swap(v,0,v.size()-1);
    display(v);
    
}