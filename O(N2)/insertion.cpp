#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>nums = {20,1,5,7,9,3};
    int n = nums.size();
    for(int i = 1 ; i < n ; i++){
      int key = nums[i] ;
      int j = i-1 ;
      while(j >= 0 && nums[j] > key){
        nums[j+1] = nums[j] ;
        j--;
      }
      nums[j+1] = key ;
    }
    for(auto it : nums) cout<<it<<" ";
    cout<<endl;
}