#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void next_permutation(vector<int> &v){
    int idx=-1;
    for(int i=v.size()-2;i>=0;i--){
        if(v[i+1]>v[i]){
            idx=i;
            break;
        }
    }
    if(idx==-1){
        int x=0,y=v.size()-1;
        while(x<y){
            int temp=v[x];
            v[x]=v[y];
            v[y]=temp;
            x++;
            y--;
        }
        return;
    }
    int s;
    for(int i=v.size()-1;i>=0;i--){
        if(v[i]>v[idx]){
            s=i;
            break;
        }
    }
    int temp = v[idx];
    v[idx]=v[s];
    v[s]=temp;
    int a=idx+1;
    int b=v.size()-1;
    while(a<b){
        temp=v[a];
        v[a]=v[b];
        v[b]=temp;
        a++;
        b--;
    }
}
int main(){
    vector<int> v={3,2,5,1};
    display(v);
    next_permutation(v);
    display(v);
}