#include<iostream>
#include<vector>
#include<utility>
using namespace std;
void ReverseAnArray(vector<int>&nums){
    int left=0;
    int right=nums.size()-1;
    while(left<right){
        swap(nums[left],nums[right]);
        left++;
        right--;
    }
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    return;
}
int main(){
    vector<int>nums={1, 2, 3, 2, 1};
    ReverseAnArray(nums);
    return 0;
}