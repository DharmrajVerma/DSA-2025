#include<iostream>
#include<stack>
using namespace std;
 void display(stack<int> st){
        stack<int> temp;
        while(st.size()>0){
            temp.push(st.top());
            st.pop();
        }
        while(temp.size()>0){
            st.push(temp.top());
            cout<<temp.top()<<" ";
            temp.pop();
        }

    }
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    display(st);
   
    stack<int> temp;
    stack<int>temp1;
    while(st.size()>0){
       temp.push(st.top());
       st.pop();
    }
   while(temp.size()>0){
     temp1.push(temp.top());
     temp.pop();
   }
    while(temp1.size()>0){
        int z=temp1.top();
        temp1.pop();
        st.push(z);
    }
    cout<<endl;
    display(st);
}
