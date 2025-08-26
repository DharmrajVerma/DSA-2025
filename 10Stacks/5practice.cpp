#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int v){
        val=v;
        next= NULL;
    }
};
class Stack{
    public:
    Node* head;
    int size;
    Stack(){
        head=NULL;
        size=0;
    }
    void push(int v){
        Node * temp= new Node(v);
        temp->next=head;
        head=temp;
        size++;
    }
    void pop(){
        if(head==NULL){
            cout<<"stack is empty ";
            return;
        }
        head=head->next;
        size--;
    }
    void display(){
        Node * temp=head;
        while(temp != NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
    }
};
int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.display();
    st.pop();
    cout<<endl<<"--------------------"<<endl;
    st.display();

}