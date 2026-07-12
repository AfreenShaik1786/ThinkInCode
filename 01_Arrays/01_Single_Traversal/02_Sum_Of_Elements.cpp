#include<iostream>
#include<vector>
using namespace std;
int sumofelements(vector<int>&nums){
  int sum=0;
  for(int i=0;i<nums.size();i++){
    sum=sum+nums[i];
  }
  return sum;

}
int main(){

  int n;
  cout<<"enter n:";
  cin>>n;
  vector<int>nums(n);
  for(int i=0;i<n;i++){
    cin>>nums[i];
  }

  cout<<sumofelements(nums);
  return 0;
}
