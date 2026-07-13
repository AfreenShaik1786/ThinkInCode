#include<iostream>
#include<vector>
using namespace std;
int FrequencyOfAnElement(vector<int>&nums,int target){
    int n=nums.size();
    int count=0;
    for(int i=0;i<n;i++){
        if(nums[i]==target){
            count++;
        }

    }
    return count;
}
int main(){
    vector<int>nums={2,2,2,2,2};
    int target=3;
    cout<<FrequencyOfAnElement(nums,target);
    return 0;
}