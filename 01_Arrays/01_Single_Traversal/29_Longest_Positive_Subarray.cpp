#include<iostream>
#include<vector>
using namespace std;
int LingostPositiveSubarray(vector<int>&nums){
    int n=nums.size();
    if(n==0){
        return 0;
    }
    int count=0;
    int maxcount=0;
    for(int i=0;i<n;i++){
        if(nums[i]>0){
            count++;
        }else{
            count=0;
        }
        if(count>maxcount){
            maxcount=count;
        }
    }
    return maxcount;
}
int main(){
    vector<int>nums={-1,-2,-3,-4,-5};
    cout<<LingostPositiveSubarray(nums);
    return 0;
}