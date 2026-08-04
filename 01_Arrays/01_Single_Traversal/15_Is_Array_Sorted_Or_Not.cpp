#include<iostream>
#include<vector>
using namespace std;
bool Issorted(vector<int>&nums){
    int n=nums.size();
    for(int i=0;i<n;i++){
        if(nums[i]>nums[i+1]){
            return false;
        }
    }
    return true;
}
int main(){
    vector<int>nums={1,2,3,4,5};
    if(Issorted(nums)){
        cout<<"array is sorted";
    }else{
        cout<<"array is not sorted";
    }
    return 0;
}