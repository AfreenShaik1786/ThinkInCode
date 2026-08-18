#include<iostream>
#include<vector>
using namespace std;
int maxconsecutive1s(vector<int>&nums){
    int n=nums.size();
    int count=0;
    int maxcount=0;
for(int i=0;i<n;i++){
    if(nums[i]==1){
        count++;
    }else {
          count=0;
    }
    if(count>maxcount){
        maxcount=count;
    }

}
return maxcount;
}
int main(){
    vector<int>nums={1,1,1,0,1,1,0,1};
    cout<<maxconsecutive1s(nums);
    return 0;
}