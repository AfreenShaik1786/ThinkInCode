#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void GreatestToRight(vector<int>&nums){
    int n=nums.size();
    if(nums.empty()){
        return;
    }
    vector<int>result;
    int maxsofar=nums[n-1];
    result.push_back(-1);
    for(int i=n-2;i>=0;i--){
        result.push_back(maxsofar);
        if(nums[i]>maxsofar){
            maxsofar=nums[i];
        }
    }
    reverse(result.begin(),result.end());
    for(int j=0;j<result.size();j++){
        cout<<result[j]<<" ";
    }
    return;
}
int main(){
    vector<int> nums = {10 ,3,7, 2, 8, 1};
    GreatestToRight(nums);
    return 0;
}