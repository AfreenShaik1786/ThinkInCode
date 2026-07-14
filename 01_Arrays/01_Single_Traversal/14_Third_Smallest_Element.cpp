#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int ThirdSmallestElement(vector<int>&nums){
    int n=nums.size();
    int smallest=INT_MAX;
    int ssmallest=INT_MAX;
    int tsmallest=INT_MAX;
    for(int i=0;i<n;i++){
        if(nums[i]<smallest){
            tsmallest=ssmallest;
            ssmallest=smallest;
            smallest=nums[i];
        }else if((nums[i]>smallest)&& (nums[i]<ssmallest)){
            tsmallest=ssmallest;
            ssmallest=nums[i];
        }else if(nums[i]>ssmallest && nums[i]<tsmallest){
            tsmallest=nums[i];
        }
    }
    if(tsmallest==INT_MAX){
        return -1;
    }
    return tsmallest;
}
int main(){
    vector<int>nums={-5,-2,0,8,10};
    cout<<ThirdSmallestElement(nums);
    return 0;
}