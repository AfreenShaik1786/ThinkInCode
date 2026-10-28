#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool twosumunsorted(vector<int>&nums,int target){
    sort(nums.begin(),nums.end());
    for(int left=0,right=nums.size()-1;left<right;){
        int sum=nums[left]+nums[right];
        if(sum==target){
            return true;
        }else if(sum<target){
            left++;
        }else{
            right--;
        }
    }
    return false;
}
int main(){
vector<int>nums={10, -10, 3, 6};
int target=0;
cout<<boolalpha<<twosumunsorted(nums,target);
return 0;
}