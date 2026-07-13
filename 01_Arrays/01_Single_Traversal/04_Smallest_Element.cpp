#include<iostream>
#include<vector>
using namespace std;
int SmallestElement(vector<int>&nums)
{
    if(nums.empty()){
        return -1;
    }
    int n=nums.size();
    int smallest=nums[0];
    for(int i=1;i<n;i++){
        if(nums[i]<smallest){
            smallest=nums[i];
         }
    }
    return smallest;
}
int main(){
     vector<int>nums={};
     cout<<SmallestElement(nums);
     return 0;
}