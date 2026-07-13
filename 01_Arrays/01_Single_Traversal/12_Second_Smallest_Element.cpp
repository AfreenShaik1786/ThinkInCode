#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int SecondSmallest(vector<int>&nums){
    if(nums.empty()){
        return -1;
    }
    int n=nums.size();
    int smallest=nums[0];
    int ssmallest=INT_MAX;
    for(int i=1;i<n;i++){
        if(nums[i]<smallest){
            ssmallest=smallest;
            smallest=nums[i];
        }else if((nums[i]>smallest) && (nums[i]<ssmallest)){
            ssmallest=nums[i];
        }
    }
    if(ssmallest==INT_MAX){
        return -1;
    }
    return ssmallest;
}
int main(){
    vector<int>nums={5,5,5};
    cout<<SecondSmallest(nums);
    return 0;
}