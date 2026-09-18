#include<iostream>
#include<vector>
using namespace std;
void LeaderInArray(vector<int>&nums){
    vector<int>leaders;
    for(int i=0;i<nums.size();i++){
         bool isleader=true;
        for(int j=i+1;j<nums.size();j++){
          if(nums[j]>=nums[i]){
               isleader=false;
                  break;
          }
        }
        if(isleader==true){
            leaders.push_back(nums[i]);
        }
    }
    for(int k=0;k<leaders.size();k++){
        cout<<leaders[k]<<" ";
    }
    return;
}
int main(){
    vector<int>nums={7,7,7,7,7};
    LeaderInArray(nums);
    return 0;
}