#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void RemoveDuplicates(vector<int>&nums){
  int n=nums.size();
  int pos=1;
  for(int i=1;i<n;i++){
    if(nums[i]!=nums[pos-1]){
      nums[pos]=nums[i];
      pos++;
    }
  }
  for(int j=0;j<pos;j++){
    cout<<nums[j]<<" ";
  }
  return;
}
int main(){
vector<int> nums = {0, 0, 0, 1, 1, 2, 2, 2, 5, 5};
  RemoveDuplicates(nums);
  return 0;
}