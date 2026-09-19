#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>nums = {20,1,5,7,9,3};
    int n = nums.size();
    for(int i = 0 ; i < n-1 ; i++){
        int mini = i ;
        // bool f = true ;
        for(int j = i+1 ; j < n ; j++){
            if(nums[j] < nums[mini]){
                // f = false ;
                mini = j ;
            }
        }
        cout<<i<<" ";
        // if(f) break ;
        if(mini == i) break ;
        int temp = nums[i] ;
        nums[i] = nums[mini] ;
        nums[mini] = temp ;
    }
    cout<<endl;
    for(auto it : nums) cout<<it<<" ";
}