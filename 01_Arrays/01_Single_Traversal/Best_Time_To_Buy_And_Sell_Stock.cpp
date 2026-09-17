#include<iostream>
#include<vector>
using namespace std;
int buyAndSellStock(vector<int>&nums){
    if(nums.empty()){
        return 0;
    }
    int minsofar=nums[0];
    int profit=0;
    for(int i=1;i<nums.size();i++){
        int currentPrice=nums[i];
        int currentProfit=currentPrice-minsofar;
        if(currentPrice<minsofar){
            minsofar=nums[i];
        }
        if(currentProfit>profit){
            profit=currentProfit;
        }
    }
    return profit;
}
int main(){
    vector<int>nums={7, 1, 5, 3, 6, 4};
   cout<<buyAndSellStock(nums);
   return 0;
}