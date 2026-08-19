#include<iostream>
#include<vector>
using namespace std;
int longestconsecutive(vector<int>&nums){
    int n=nums.size();
    if(n==0){
        return 0;
    }
    int count=1;
    int maxcount=1;
    for(int i=1;i<n;i++){
        if(nums[i]==nums[i-1]){
            count++;
        }else{
            count=1;
        }
        if(count>maxcount){
            maxcount=count;
        }
    }
 return maxcount;   
}
int main(){
    vector<int>nums={};
  cout<<longestconsecutive(nums);
    return 0;
}