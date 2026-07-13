#include<iostream>
#include<vector>
using namespace std;
bool LinearSearch(vector<int>&nums,int target){
    int n=nums.size();
   for(int i=0;i<n;i++){
    if(nums[i]==target){
        return true;
    }
   }
   return false;
}
int main(){
    vector<int>nums={5};
    int target=5;
   cout<< LinearSearch(nums,target);
    return 0;
}
