#include <iostream>
#include <bits/stdc++.h>
using namespace std ;

int partition(vector<int>& nums , int low , int high){
    int i = low , j = high ;
    int pivot = nums[low];
    while(i < j){
        while(i <= high && nums[i]<= pivot ) i++;
        while(j >= low && nums[j]> pivot ) j--;

        if(i < j) swap(nums[i],nums[j]);
    }
    swap(nums[low],nums[j]);
    return j ;
}

void QuickSort(vector<int>&nums , int low , int high){
    if(low >= high) return ;
    int p = partition(nums,low,high);

    QuickSort(nums,low,p-1);
    QuickSort(nums,p+1 , high);
}

int main(){
    vector<int>nums = {4,6,2,5,7,9,1,3};
    int low = 0 , high = nums.size()-1;
    QuickSort(nums,low,high);

    for(auto it : nums) cout<<it<< " " ;

    return 0 ;
}