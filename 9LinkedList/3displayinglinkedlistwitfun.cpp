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
void display(Node * head){
    Node * temp=head;
    while(temp!= NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
        
    }
    cout<<endl;
}
int main(){
    Node * a= new Node(10);
    Node *b=new Node(20);
    Node*c=new Node(30);
    Node * d= new Node(40);
    Node*e=new Node(50);
    Node * temp=b;
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    display(d);
    cout<<temp->next->next->next->val;
}
