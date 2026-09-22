#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void LeftAndRightMaximumDifference(vector<int>&nums){
  int n=nums.size();
  vector<int>answer(n);
  int leftmaximum=0;
  int rightmaximum=0;
  for(int i=0;i<n;i++){
    answer[i]=leftmaximum;
    leftmaximum=max(leftmaximum,nums[i]);
  }
  for(int j=n-1;j>=0;j--){
    answer[j]=abs(rightmaximum-answer[j]);
    rightmaximum=max(rightmaximum,nums[j]);
  }
  for(int k=0;k<answer.size();k++){
    cout<<answer[k]<<" ";
  }
  return ;
}
int main(){
  vector<int>nums={3, 3, 3, 3};
  LeftAndRightMaximumDifference(nums);
  return 0;
}
