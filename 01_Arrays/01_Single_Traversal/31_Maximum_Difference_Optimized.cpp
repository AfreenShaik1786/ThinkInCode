#include<iostream>
#include<vector>
using namespace std;
int maximumDifference(vector<int>&nums){
   
    if(nums.empty()){
        return 0;
    }
    int minsofar=nums[0];
    int maxdiff=0;
    for(int i=1;i<nums.size();i++){
        int current=nums[i];
        if(current<minsofar){
            minsofar=current;
        }else{
            int difference=current-minsofar;
            if(difference>maxdiff){
                maxdiff=difference;
            }
        }
    }
    return maxdiff;
}
int main(){
    vector<int>nums={7, 9, 1, 3, 2, 8};
    cout<<maximumDifference(nums);
    return 0;
}