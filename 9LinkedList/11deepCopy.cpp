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
class ll{
    public:
    void display(Node *head){
    Node* temp=head;
    while(temp != NULL){
        cout<<temp->val<<" ";
        temp=temp->next;

    }
       
}
Node* deepcopy(Node *head){
        Node* c=new Node(0);
        Node* ctemp=c;
        Node* temp=head;
        while(temp!= NULL){
            ctemp->next=new Node(temp->val);
            ctemp=ctemp->next;
            temp=temp->next;
            
        }
        return c->next;
    }

};
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
    ll f;
    f.display(a);
    
}