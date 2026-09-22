#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void LeftAndRightSumDifference(vector<int>&nums){
    int n=nums.size();
    vector<int>result(n);
    int leftsum=0;
   int rightsum=0;
  for(int i=0;i<n;i++){
    result[i]=leftsum;
    leftsum=leftsum+nums[i];
  }
  for(int j=n-1;j>=0;j--){
    result[j]=abs(result[j]-rightsum);
    rightsum=rightsum+nums[j];
  }
  for(int k=0;k<result.size();k++){
    cout<<result[k]<<" ";
  }
  return;
}
int main(){
    vector<int>nums={-1,2,-3,4};
LeftAndRightSumDifference(nums);
return 0;
}