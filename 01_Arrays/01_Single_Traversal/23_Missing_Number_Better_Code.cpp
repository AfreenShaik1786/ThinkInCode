#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int missingnumber(vector<int>&nums){
  int n=nums.size();
  sort(nums.begin(),nums.end());
  for(int i=0;i<n;i++){
    if(nums[i]!=i){
      return i;
      break;
    }
  }
  return n;
}
int main(){
  vector<int>nums={5,4,3,2,1,0};
  cout<<missingnumber(nums);
  return 0;
}