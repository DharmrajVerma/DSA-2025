#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void mergeshort(vector<int> &v1,vector<int> &v2,vector<int> &v3){
    int a=0,b=0,c=0;
   while(v1.size()>a && v2.size()>b){
    if(v1[a]<v2[b]){
        v3[c]=v1[a];
        a++;
    }
    else{
        v3[c]=v2[b];
        b++;
    }
    c++;
   }
   while(v1.size()>a){
    v3[c]=v1[a];
    a++;
    c++;
   }
   while(v2.size()>b){
    v3[c]=v2[b];
    c++;
    b++;
   }
 
}
int main(){
    
    vector<int> v1={2,4,6,8};
    vector<int> v2={1,3,5,7,9,10,12,13};
    int n=v1.size()+v2.size();
    vector<int> v3(n);
    display(v1);
    display(v2);
    mergeshort(v1,v2,v3);
    display(v3);
   

}