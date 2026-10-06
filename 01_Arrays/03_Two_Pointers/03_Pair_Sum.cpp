#include<iostream>
#include<vector>
using namespace std;
bool PairSum(vector<int>&nums,int target){
    int n=nums.size();
    int left=0;
    int right=n-1;
     while(left<right){
      int sum=nums[left]+nums[right];
      if(sum==target){
        return true;
      }else if(sum<target){
        left++;
      }else{
        right--;
      }
   }
   return false;
}
int main(){
    vector<int>nums={ 5};
    int target=10;
    cout<<boolalpha<<PairSum(nums,target);
    return 0;
}
