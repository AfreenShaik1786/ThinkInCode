#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int ThirdLargestElement(vector<int>&nums){
    int n=nums.size();
    int largest=INT_MIN;
    int slargest=INT_MIN;
    int tlargest=INT_MIN;
    for(int i=0;i<n;i++){
        if(nums[i]>largest){
            tlargest=slargest;
            slargest=largest;
            largest=nums[i];
        }else if((nums[i]<largest)&& (nums[i]>slargest)){
            tlargest=slargest;
            slargest=nums[i];
        }else if(nums[i]<slargest && nums[i]>tlargest){
            tlargest=nums[i];
        }
    }
    if(tlargest==INT_MIN){
        return -1;
    }
    return tlargest;
}
int main(){
    vector<int>nums={-5,-2,-10,-1};
    cout<<ThirdLargestElement(nums);
    return 0;
}