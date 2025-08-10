#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
 vector<int> leftmax(vector<int> &h){
    vector<int> lmax(h.size());
    lmax[0]=h[0];
    for(int i=1;i<h.size();i++){
        if(h[i]>lmax[i-1]){
            lmax[i]=h[i];
        }    
    else{
          lmax[i]=lmax[i-1];  
    }
}
return lmax;
}
 vector<int> rightmax(vector<int> &h){
    int n=h.size();
    vector<int> rmax(n);
    rmax[n-1]=h[n-1];
    for(int i=n-2;i>=0;i--){
        if(h[i]>rmax[i+1]){
            rmax[i]=h[i];
        }
        else{
            rmax[i]=rmax[i+1];
        }
    }
    return rmax;

}
int trapping(vector<int> &h,vector<int> &lmax,vector<int> &rmax){
    int count=0;
    for(int i=0;i<h.size();i++){
        count +=min(lmax[i],rmax[i])-h[i];
    }
    return count;
}
int main(){
    vector<int> h={4,2,0,3,2,5};
    display(h);
    vector<int> lmax = leftmax(h); 
    display(lmax);
    vector<int> rmax = rightmax(h);
    display(rmax);
    int tr = trapping(h,lmax,rmax);
    cout<<tr;
}
