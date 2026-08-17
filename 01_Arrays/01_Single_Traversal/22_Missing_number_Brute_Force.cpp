#include<iostream>
#include<vector>
using namespace std;
int missingnumber(vector<int>&nums){
    int n=nums.size();
  
    for(int i=0;i<=n;i++){
      bool found=false;
      for(int j=0;j<n;j++){
        if(nums[j]==i){
            found=true; 
            break;  
        }
      }
      if(found==false){
       return i;
      }
    }
    return -1;
}
int main(){
    vector<int>nums={5,4,3,2,1,0};
    
  cout<<missingnumber(nums);
    return 0;
}