#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v){
    int n=v.size();
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void dutchshort(vector<int> &v){
    int low=0,mid=0,high=v.size()-1;
    while(mid<=high){
        if(v[mid]==2){
            int temp=v[mid];
            v[mid]=v[high];
            v[high]=temp;
            high--;
        }
        else if(v[mid]==1){
            mid++;
        }
        else if(v[mid]==0){
            int temp=v[mid];
            v[mid]=v[low];
            v[low]=temp;
            mid++;
            low++;
        }
        
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
    dutchshort(v);
    display(v);
}
