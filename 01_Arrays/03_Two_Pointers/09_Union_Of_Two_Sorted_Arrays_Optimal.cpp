#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>SortedArraysUnion(vector<int>&A,vector<int>&B){
  int n1=A.size();
  int n2=B.size();
  int i=0;
  int j=0;
  vector<int>UnionArr;
  while(i<n1 && j<n2){
    if(A[i]<= B[j]){
      if(UnionArr.size() == 0 || UnionArr.back() != A[i]){
        UnionArr.push_back(A[i]);
      }
          i++;

    }else{
      if(UnionArr.size() ==0 || UnionArr.back() != B[j]){
        UnionArr.push_back(B[j]);
      }
      j++;
    }
  }
  while(j<n2){
   if(UnionArr.back() != B[j]){
    UnionArr.push_back(B[j]);
   }
   j++;
  }
  while(i<n1){
    if(UnionArr.back() != A[i]){
      UnionArr.push_back(A[i]);
    }
    i++;
  }
  return UnionArr;
}
int main(){
  vector<int>A={1,1,2,3,4,5};
  vector<int>B={2,3,4,4,5,6};
  vector<int>UnionArr=(SortedArraysUnion(A,B));
  for(int i : UnionArr){
            cout<<i<<" ";
  }
  return 0;
}