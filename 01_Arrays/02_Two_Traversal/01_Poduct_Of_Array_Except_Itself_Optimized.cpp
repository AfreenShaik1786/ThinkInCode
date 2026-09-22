#include<iostream>
#include<vector>
using namespace std;
void ProductOfArrayExceptItself(vector<int>&nums){
    int n=nums.size();
    vector<int>result(n);
    int leftproduct=1;
    int rightproduct=1;
    for(int i=0;i<n;i++){
        result[i]=leftproduct;
        leftproduct=leftproduct*nums[i];
    }
    for(int j=n-1;j>=0;j--){
        result[j]=rightproduct*result[j];
        rightproduct=rightproduct*nums[j];
    }
    for(int k=0;k<result.size();k++){
        cout<<result[k]<<" ";
    }
    return;
}
int main(){
    vector<int>nums={2, 0, 3, 0};
    ProductOfArrayExceptItself(nums);
    return 0;
}