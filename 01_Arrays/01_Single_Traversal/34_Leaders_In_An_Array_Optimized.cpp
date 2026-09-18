#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void LeaderInArray(vector<int>&nums){
    if(nums.empty()){
        return;
    }
    vector<int>leaders;
    int maxsofar=nums[nums.size()-1];
     leaders.push_back(maxsofar);
    for(int i=nums.size()-2;i>=0;i--){
       
        if(nums[i]>maxsofar){
            maxsofar=nums[i];
            leaders.push_back(nums[i]);
        }
        
    }
    reverse(leaders.begin(),leaders.end());
    for(int j=0;j<leaders.size();j++){
        cout<<leaders[j]<<" ";
    }
    return;
}
int main(){
vector<int> nums = {};
    LeaderInArray(nums);
    return 0;
}
