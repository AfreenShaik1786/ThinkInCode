#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void GreatestToRight(vector<int>&nums){
    int n=nums.size();
    vector<int>result;
    for(int i=0;i<n;i++){
        if(i==n-1){
            result.push_back(-1);
            continue;
        }
        int greatest=i+1;
        for(int j=i+1;j<n;j++){
            if(nums[j]>nums[greatest]){
                greatest=j;
            }
        }
        result.push_back(nums[greatest]);

    }
   
    for(int k=0;k<result.size();k++){
        cout<<result[k]<<" ";
    }
    return;
}
int main(){
    vector<int>nums={1,2,3,4,5};
    GreatestToRight(nums);
    return 0;
}