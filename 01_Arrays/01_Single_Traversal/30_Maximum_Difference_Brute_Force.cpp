#include<iostream>
#include<vector>
using namespace std;
int MaximumDifference(vector<int>&nums){
    int n=nums.size();
    if(n==0){
        return 0;
    }
    int maxdiff=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int diff=nums[j]-nums[i];

            if(diff>maxdiff){
                maxdiff=diff;
            }
        }

        
    }
    return maxdiff;
}
int main(){
    vector<int>nums={10,1,2};
    cout<<MaximumDifference(nums);
    return 0;
}