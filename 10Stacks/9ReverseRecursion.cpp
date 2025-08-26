#include<iostream>
#include<stack>
using namespace std;
void recDisplay(stack<int> &st){
    if(st.size() == 0) return;
    
    int x= st.top();
    st.pop();
    recDisplay(st);
     st.push(x);
    cout<<x<<" ";
}
void insertatbottom(stack<int> &st, int v){
    if(st.size()==0){
        st.push(v);
        return;
    }
    int x=st.top();
    st.pop();
    insertatbottom(st,v);
    st.push(x);
}
void reverse(stack<int> &st){
    if(st.size()==0) return;
    int x=st.top();
    st.pop();
    reverse(st);
    insertatbottom(st,x);
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.push(70);
    st.push(80);
    recDisplay(st);
    cout<<endl;
    reverse(st);
    recDisplay(st);
}