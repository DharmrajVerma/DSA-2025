#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int v){
        val=v;
        left= NULL;
        right=NULL;
    }
};
int level(Node* root){
    if(root== NULL) return 0;
    return 1 + max(level(root->left),level(root->right));
}
void nthorder(Node* root,int level,int curr){
    if(root==NULL) return;
    if(level==curr){
        cout<<root->val<<" ";
        return;
    }
    
    nthorder(root->left,level,curr+1);
    nthorder(root->right,level,curr+1);
}

int main(){
    Node * a= new Node(1);
    Node * b= new Node(2);
    Node * c= new Node(3);
    Node * d= new Node(4);
    Node * e= new Node(5);
    Node * f= new Node(6);
    Node * g= new Node(7);
    Node * h= new Node(8);
    Node * i= new Node(9);
    Node * j= new Node(10);
    Node * k= new Node(11);

    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    d->left=h;
    e->left=i;
    e->right=j;
    c->left=f;
    c->right=g;
    f->right=k;
    int n=level(a);
    for(int i=0;i<n;i++){
        nthorder(a,i,0);
        cout<<endl;

    }
     
    
}