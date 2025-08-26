#include<iostream>
#include<stack>
using namespace std;
void display(stack<int> &st){
    stack<int> temp;
    while(st.size()>0){
         cout<<st.top()<<" ";
        temp.push(st.top());
        st.pop();
    }
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
}
void recDisplay(stack<int> &st){
    if(st.size() == 0) return;
    
    int x= st.top();
    st.pop();
    recDisplay(st);
     st.push(x);
    cout<<st.top()<<" ";
   


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

}