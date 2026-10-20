#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>SortedArraysUnion(vector<int>&A,vector<int>&B){
    int n1=A.size();
    int n2=B.size();
   vector<int>ans;
   for(int i=0;i<n1;i++){
      bool exists=false;
      for(int j=0;j<ans.size();j++){
        if(ans[j]==A[i]){
            exists=true;
            break;
        }
      }
      if(!exists){
        ans.push_back(A[i]);
      }
   }
   for(int i=0;i<n2;i++){
    bool exists=false;
    for(int j=0;j<ans.size();j++){
        if(ans[j]==B[i]){
            exists=true;
            break;
        }
    }
    if(!exists){
        ans.push_back(B[i]);
    }
   }
   sort(ans.begin(),ans.end());
   return ans;
}
int main(){
    vector<int>A={1,1,2,3,4,5};
    vector<int>B={2,3,4,4,5,6};
     vector<int>ans=SortedArraysUnion(A,B);
     for(int x : ans){
        cout<<x<<" ";
     }
     return 0;
}