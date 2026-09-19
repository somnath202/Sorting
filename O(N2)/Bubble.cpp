#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>nums = {20,1,5,7,9,3};
    int n = nums.size();
    for(int i = 0 ; i < n-1 ; i++){
        bool f = true ;
        for(int j = 0 ; j < n-1 ; j++){
            if(nums[j] > nums[j+1]){
                swap(nums[j],nums[j+1]) ;
                f = false ;
            }
        }
        cout<<i<<" ";
        if(f) break ;
    }
    cout<<endl;
    for(auto it : nums) cout<<it<<" ";
}