#include<iostream>
#include<vector>
#include<set>
using namespace std;
vector<int>SortedArraysUnion(vector<int>A,vector<int>B){
  int n1=A.size();
  int n2=B.size();
  set<int>st;
  for(int i=0;i<n1;i++){
    st.insert(A[i]);
  }
  for(int j=0;j<n2;j++){
    st.insert(B[j]);
  }
  vector<int>temp;
  for(auto it : st){
    temp.push_back(it);
  }
   
  return temp;

}
int main(){
  vector<int>A={1,1,2,3,4,5};
  vector<int>B={2,3,4,4,5,6};
vector<int>ans=(SortedArraysUnion(A,B));
for(int k=0;k<ans.size();k++){
  cout<<ans[k]<<" ";
}
 return 0;
}