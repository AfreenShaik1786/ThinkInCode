#include<iostream>
#include<vector>
using namespace std;
void RightRotationByOne(vector<int>&nums){
    int n=nums.size();
    if(n==0) return;
    int saved=nums[n-1];
    for(int i=n-1;i>0;i--){
        nums[i]=nums[i-1];
    }
    nums[0]=saved;
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
return ;
}
int main(){
    vector<int>nums={1,2,3,4,5};
    RightRotationByOne(nums);
    return 0;
}