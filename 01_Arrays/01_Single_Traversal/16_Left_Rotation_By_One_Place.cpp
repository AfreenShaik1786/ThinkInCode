#include<iostream>
#include<vector>
using namespace std;
void LeftRotation(vector<int>&nums){
    int n=nums.size();
    int saved=nums[0];
    for(int i=0;i<n-1;i++){
        nums[i]==nums[i+1];
    }
    nums[n-1]=saved;
}
int main(){
    vector<int>nums={5,10,15,20};
    LeftRotation(nums);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    return 0;

}