#include<iostream>
#include<vector>
using namespace std;
int OddNumbers(vector<int>&nums){
 int n=nums.size();
 int count=0;
 for(int i=0;i<n;i++){
    if(nums[i]%2!=0){
        count++;
    }
 }
 return count;
}
int main(){
    vector<int>nums={-2,-1,0,1,2};
    cout<<OddNumbers(nums);
    return 0;
}