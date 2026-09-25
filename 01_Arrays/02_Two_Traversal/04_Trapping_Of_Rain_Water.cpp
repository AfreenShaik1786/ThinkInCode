#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int TrappingOfRainWater(vector<int>&nums){
    int n=nums.size();
    vector<int>water(n);
    int leftmax=0;
    int rightmax=0;
    int sum=0;
    for(int i=0;i<n;i++){
        water[i]=leftmax;
        if(nums[i]>leftmax){
            leftmax=nums[i];
        }
    }
    for(int j=n-1;j>=0;j--){
        int waterlevel = min(rightmax, water[j]);
int currentwater = waterlevel - nums[j];

water[j] = max(0, currentwater);
        if(nums[j]>rightmax){
            rightmax=nums[j];
        }
    }
    for(int k=0;k<water.size();k++){
        
            sum+=water[k];
        
    }
    return sum;
}
int main(){
    vector<int>nums={5,5,5,5};
   cout<<TrappingOfRainWater(nums);


}