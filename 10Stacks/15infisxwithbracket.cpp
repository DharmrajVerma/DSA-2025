#include<iostream>
#include<stack>
using namespace std;
int prior(char ch){
    if(ch=='+' || ch=='-') return 1;
    else return 2;
}
int solve(char ch,int val1,int val2){
    if(ch=='+') return val1 + val2;
    else if(ch=='-') return val1 - val2;
    else if(ch=='*') return val1*val2;
    else return val1/val2;
}
stack<int> val;
stack<char> op;
int main(){
    string s="2+(6*4)/8-3";
    for(int i=0;i<s.size();i++){
        if(s[i]>=48 && s[i]<=57){
            val.push(s[i]-48);
        }
        else if(s[i]=='('){
            op.push(s[i]);
        }
        else if(s[i]==')'){
            while(op.size()>0 && op.top() != '('){
                char ch=op.top();
                op.pop();
                int val2 = val.top();
                val.pop();
                int val1 = val.top();
                val.pop();
                int ans = solve(ch,val1,val2);
                val.push(ans);
            }
            op.pop();
        }
        else{
            if(op.size()==0 || prior(op.top()) < prior(s[i])){
                op.push(s[i]);
            }
            else{
                while(op.size()>0 && prior(op.top()) >= prior(s[i]) ){
                    char ch=op.top();
                    op.pop();
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    int ans = solve(ch,val1,val2);
                    val.push(ans);

                }
                op.push(s[i]);
            }
        }

    }
     while(op.size() ){
        char ch=op.top();
        op.pop();
        int val2 = val.top();
        val.pop();
        int val1 = val.top();
        val.pop();
        int ans = solve(ch,val1,val2);
        val.push(ans);
     }
     cout<<val.top()<<endl;
}