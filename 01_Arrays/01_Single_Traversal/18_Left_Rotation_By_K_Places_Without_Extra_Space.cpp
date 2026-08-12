#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void LeftRotationByK(vector<int>&nums,int k){
    int n=nums.size();
    if(n==0)return;
    k=k%n;
    reverse(nums.begin(),nums.begin()+k);
    reverse(nums.begin()+k,nums.begin()+n);
    reverse(nums.begin(),nums.begin()+n);
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    return;
}
int main(){
    vector<int>nums={1,2,3,4,5};
    int k=2;
    LeftRotationByK(nums,k);
    return 0;
    
}
