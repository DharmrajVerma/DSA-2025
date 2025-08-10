#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int v){
        val=v;
        next=NULL;
    }
};
class linkedlist{
    public:
    Node * head;
    Node * tail;
    int size;
    linkedlist(){
        head=tail=NULL;
        size=0;
    }
    void insertatend(int n){
        Node * temp=new Node(n);
        if(size==0){
            head=tail=temp;
        }
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;
    }
    void display(){
        Node* temp=head;
        while(temp!= NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main(){
    linkedlist ll;
    ll.insertatend(10);
    ll.insertatend(20);
    ll.insertatend(30);
    ll.insertatend(40);
    ll.display();
    ll.insertatend(50);
    ll.insertatend(60);
     ll.display();

}