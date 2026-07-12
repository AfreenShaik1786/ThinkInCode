#include<iostream>
#include<vector>
using namespace std;
void PrintArray(vector<int>&nums,int n){
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    return;
}
int main(){
    vector<int>nums={10,20,30,40};
    int n=nums.size();
    PrintArray(nums,n);
    return 0;
}