#include<iostream>
#include<vector>
using namespace std;
void RightRotationByK(vector<int>&nums,int k){
    int n=nums.size();
    if(n==0)return;
    k=k%n;
    vector<int>temp;
    for(int i=n-k;i<n;i++){
        temp.push_back(nums[i]);
    }
    for(int i=n-k-1;i>=0;i--){
        nums[i+k]=nums[i];
    }
    for(int i=0;i<k;i++){
        nums[i]=temp[i];
    }
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    return;
}
int main(){
    vector<int>nums={1,2,3,4,5};
    int k=2;
    RightRotationByK(nums,k);
    return 0;
}