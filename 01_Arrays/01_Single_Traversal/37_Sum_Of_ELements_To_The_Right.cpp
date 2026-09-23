#include<iostream>
#include<vector>
using namespace std;
void SumOfElementsToTheRight(vector<int>&nums){
  int n=nums.size();
  vector<int>result(n);
  int sum=0;
  for(int i=n-1;i>=0;i--){
    result[i]=sum;
    sum=sum+nums[i];
  }
  for(int j=0;j<result.size();j++){
    cout<<result[j]<<" ";
  }
  return;
}
int main(){
  vector<int>nums={-1, 2, -3, 4};
  SumOfElementsToTheRight(nums);
  return 0;
}