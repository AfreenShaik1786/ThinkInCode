#include<iostream>
#include<vector>
using namespace std;
void MoveZeroes(vector<int>&nums){
  int n=nums.size();
  int pos=0;
  for(int i=0;i<n;i++){
    if(nums[i]!=0){
      nums[pos]=nums[i];
      pos++;
    }
  }
  for(int j=pos;j<n;j++){
    nums[j]=0;
  }
  for(int k=0;k<n;k++){
    cout<<nums[k]<<" ";
  }
  return;
}
int main(){
  vector<int>nums={0,1,0,3,12};
  MoveZeroes(nums);
  return 0;
}

