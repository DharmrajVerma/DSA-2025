#include<iostream>
#include<climits>
using namespace std;

class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int v){
        val=v;
        left=NULL;
        right=NULL;     
    }
};
void display(TreeNode * root){
      if(root==NULL) return;
      cout<<root->val<<" ";
      display(root->left);
      display(root->right);

}
int sum(TreeNode * root){
    if(root==NULL) return 0;
    int s= root->val+ sum(root->left) +sum(root->right);
    return s;
}
int nodecount(TreeNode* root){
    if(root==NULL) return 0;
    return 1+ nodecount(root->left)+nodecount(root->right);
}
int maxvalue(TreeNode* root){
    if(root==NULL) return INT_MIN;
    return max(root->val,max(maxvalue(root->left),maxvalue(root->right)));
}
int level(TreeNode * root){
    if(root==NULL) return 0;
    return 1+ max(level(root->left),level(root->right));

}
int main(){
    TreeNode* a= new TreeNode(178);
    TreeNode* b= new TreeNode(572);
    TreeNode* c= new TreeNode(398);
    TreeNode* d= new TreeNode(412);
    TreeNode* e= new TreeNode(225);
    TreeNode* f= new TreeNode(346);
    TreeNode* g= new TreeNode(89);
    TreeNode* h= new TreeNode(98);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    f->left=h;
    display(a);
    cout<<endl;
    cout<<sum(a);
    cout<<endl;
    cout<<nodecount(a);
    cout<<endl;
    cout<<maxvalue(a);
    cout<<endl;
    cout<<level(a);
}