#include<iostream>
#include<vector>
using namespace std;
int LargestElement(vector<int>&nums)
{
  if(nums.empty()){
    return -1;
  }
    int n=nums.size();
    int largest=nums[0];
    for(int i=1;i<n;i++){
        if(nums[i]>largest){
            largest=nums[i];
        }
    }
    return largest;
}
int main(){
    vector<int>nums={1,2,3,10};
   cout<<LargestElement(nums);
   return 0;
}