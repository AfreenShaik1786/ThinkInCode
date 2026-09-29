#include<iostream>
#include<vector>
using namespace std;
int PivotIndex(vector<int>&nums){
    int n=nums.size();
    int Leftsum=0;
    int Rightsum=0;
    vector<int>Leftsummation(n);
    for(int i=0;i<n;i++){
        Leftsummation[i]=Leftsum;
        Leftsum=Leftsum+nums[i];
    }
     int answer=-1;
    for(int j=n-1;j>=0;j--){
        if(Leftsummation[j]==Rightsum){
           answer=j;
           
        }
        Rightsum=Rightsum+nums[j];
    }
  
    return answer;
    }

int main(){
    vector<int>nums={1,2,3};
  cout<< PivotIndex(nums);
    return 0;
}