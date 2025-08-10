#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void sort01(vector<int> &v){
    int noz=0,noo=0,notw=0;
   for(int i=0;i<v.size();i++){
    if(v[i]==0) noz++;
    else if (v[i]==1) noo++;
    else if(v[i]==2) notw++;
   }
  for(int i=0;i<v.size();i++){
    if(i<noz) v[i]=0;
    else if (i<noo+noz) v[i]=1;
    else  v[i]=2;
  }
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(1);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    display(v);
    sort01(v);
    display(v);
}