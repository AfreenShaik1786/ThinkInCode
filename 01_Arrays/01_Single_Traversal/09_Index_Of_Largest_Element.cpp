#include<iostream>
#include<vector>
using namespace std;
int IndexOfLargestElement(vector<int>&nums){
    if(nums.empty()){
        return -1;
    }
    int n=nums.size();
    int largestindex=0;
    for(int i=0;i<n;i++){
        if(nums[i]>nums[largestindex]){
            largestindex=i;
        }
    }
    return largestindex;
    
}
int main(){
    vector<int>nums={-8,-2,-15,-6};
    cout<<IndexOfLargestElement(nums);
    return 0;
}