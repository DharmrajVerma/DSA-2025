#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  vector<string> s={"flight","flow","flower"};
  sort(s.begin(),s.end());
  int n=s.size();
  string start=s[0];
  string end=s[n-1];
  for(int i=0;i<min(s[0].size(),s[n-1].size());i++){
    if(start[i]==end[i]){
        cout<<start[i];
    }
    else {
        
        break;
    }
  }
}
