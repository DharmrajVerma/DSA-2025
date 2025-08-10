#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node *next;
    Node(int v){
        val=v;
        next=NULL;
    }
};
void recdisplay(Node *head){
    
    if(head == NULL) return;
    cout<<head->val<<" ";
    recdisplay(head->next);
}
int main(){
    Node * a=new Node(10);
    Node *b= new Node(20);
    Node * c=new Node(30);
    Node *d= new Node(40);
    Node * e=new Node(50);
    Node *f= new Node(60);

    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=f;
    recdisplay(a);
}