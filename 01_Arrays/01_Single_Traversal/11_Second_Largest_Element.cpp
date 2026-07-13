#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int SecondLargest(vector<int>&nums){
    if(nums.empty()){
        return -1;
    }
    int n=nums.size();
    int largest=nums[0];
    int slargest=INT_MIN;
    for(int i=1;i<n;i++){
        if(nums[i]>largest){
            slargest=largest;
            largest=nums[i];
        }else if((nums[i]<largest) && (nums[i]>slargest)){
            slargest=nums[i];
        }
    }
    if(slargest==INT_MIN){
        return -1;
    }
    return slargest;
}
int main(){
    vector<int>nums={};
    cout<<SecondLargest(nums);
    return 0;
}