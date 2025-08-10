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
    Node* temp=head;
    while(temp != NULL){
        cout<<temp->val<<" "<<" and address is "<<temp->next<<endl;
        temp=temp->next;
    }
}
void insertatend(int v,Node *head){
Node * n=new Node(v);
Node * temp=head;
while(temp->next!=NULL){
    temp=temp->next;
}
temp->next=n;
}
int main(){
    Node * a=new Node(10);
    Node * b=new Node(30);
    Node * c=new Node(50);
    Node * d=new Node(70);
    Node * e=new Node(90);

    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    
    insertatend(110,a);
    insertatend(130,a);
    insertatend(150,a);
    display(a);
    
}