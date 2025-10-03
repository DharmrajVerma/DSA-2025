#include<iostream>
#include<queue>
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
Node*  construct(int arr[],int n){
    queue<Node*> q;
    Node * root= new Node(arr[0]);
    q.push(root);
    int i=1;
    int j=2;
    while(q.size()>0 &&i<n){
        Node * temp=q.front();
        q.pop();
        Node *l;
        Node *r;
        if(arr[i] != -1000) l=new Node(arr[i]);
        else l= NULL;
        if( j<n && arr[j]!= -1000 ) r=new Node(arr[j]);
        else r=NULL;
        temp->left=l;
        temp->right=r;
        if(l != NULL) q.push(l);
        if(r != NULL) q.push(r);
        i=i+2;
        j=j+2;
    }
    return root;

}
int main(){
    int arr[]={1,2,3,4,5,-1000,6,-1000,-1000,7,8,9,-1000};
    int n=sizeof(arr)/sizeof(arr[0]);
    Node * root=construct(arr,n);
    int a=level(root);
    for(int i=0;i<a;i++){
        nthorder(root,i,0);
        cout<<endl;

    }
     
    
}