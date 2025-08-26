#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
     int arr[]={3,4,2,8,7,4,5,3,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int nge[n];
    st.push(arr[n-1]);
    nge[n-1]=-1;
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=n-2;i>=0;i--){
        while(st.size() > 0 && arr[i]>st.top()){
            st.pop();
        }
        if(st.size()==0) nge[i]=-1;
        else nge[i]=st.top();
        st.push(arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<nge[i]<<" ";
    }
   

}