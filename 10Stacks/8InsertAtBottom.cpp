#include<iostream>
using namespace std;
#include<stack>
void recDisplay(stack<int> &st){
    if(st.size() == 0) return;
    
    int x= st.top();
    st.pop();
    recDisplay(st);
     st.push(x);
    cout<<st.top()<<" ";
}
void insertatbottom(stack<int> &st,int v){
    if(st.size()==0){
        st.push(v);
        return;
    }
    int x=st.top();
    st.pop();
    insertatbottom(st,v);
   
    st.push(x);
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
    insertatbottom(st,100);
    recDisplay(st);
    cout<<endl;
}