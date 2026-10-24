#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>IntersectionOfArrays(vector<int>&A,vector<int>&B){
  int n=A.size();
  int m=B.size();
  int i=0;
  int j=0;
  vector<int>Intersectionarr;
  while(i<n && j<m){
    if(A[i]<B[j]){
      i++;
    }else if(B[j]<A[i]){
      j++;
    }else{
      if(Intersectionarr.size()==0 || Intersectionarr.back() != A[i]){
      Intersectionarr.push_back(A[i]);
      }
      i++;
      j++;
    }
  }
  return Intersectionarr;

}
int main(){
  vector<int>A={1,2,3};
  vector<int>B={1,2,3};
  vector<int>Intersectionarr=IntersectionOfArrays(A,B);
  for(int k : Intersectionarr){
   cout<<k<<" ";
  }
  return 0;
}