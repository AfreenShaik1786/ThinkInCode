#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int MaxConsecutive1s(vector<int>&nums){
 int n=nums.size();
int maxcount = 0;
int count = 0;
for(int i = 0; i < n; i++){
    if(nums[i] == 1){
        count++;
    }
    else{
        maxcount = max(maxcount, count);
        count = 0;
    }
}
maxcount = max(maxcount, count);
return maxcount;
}
int main(){
    vector<int>nums={0,0,0,0,0};
    cout<<MaxConsecutive1s(nums);
    return 0;
}
