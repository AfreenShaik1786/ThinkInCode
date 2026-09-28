#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void specialElements(vector<int>&nums){
    int n=nums.size();
    int leftMaximum=nums[0];
    int Rightminimum=nums[n-1];
    vector<int>leftmax(n);
    vector<int>result(n);
    for(int i=1;i<n; i++){
        leftmax[i]=leftMaximum;
        leftMaximum=max(nums[i],leftMaximum);
    }
    for(int j=n-2; j>=1; j--){
        if((nums[j]>leftmax[j])&&(nums[j]<Rightminimum)){
            result[j]=nums[j];
        }
        Rightminimum=min(nums[j],Rightminimum);

    }
    for(int k=0;k<result.size();k++){
        if(result[k]!=0){
       cout<<result[k]<<" ";
        }
    }
}
int main(){
    vector<int>nums={1,2,3,5,4,6,7};
    specialElements(nums);
    return 0;
}