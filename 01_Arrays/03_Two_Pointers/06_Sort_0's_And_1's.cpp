#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void Sort0sAnd1s(vector<int>&nums){
  int n=nums.size();
  int left=0;
  int right=n-1;
  while(left<right){
    if(nums[left]==0){
      left++;
    }
      else if(nums[right]==1){
      right--;
    }
    else{
    swap(nums[left],nums[right]);
    right--;
    left++;
    }
    
  }
  for(int i=0;i<n;i++){
      cout<<nums[i]<<" ";
    }
  return;
}
int main(){
  vector<int>nums={1,0,0,1,1,0,1,0,0};
   Sort0sAnd1s(nums);
   return 0;
}