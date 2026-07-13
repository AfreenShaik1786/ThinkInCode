#include<iostream>
#include<vector>
using namespace std;
bool ElementExists(vector<int>&nums,int target){
    int n=nums.size();
    for(int i=0;i<n;i++){
        if(nums[i]==target){
            return true;
        }
    }
    return false;
}
int main(){
    vector<int>nums={7};
    int target=5;
    cout<<ElementExists(nums,target);
    return 0;
}