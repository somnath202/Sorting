#include<iostream>
#include<bits/stdc++.h>
using namespace std ;

void Merge(vector<int>&nums , int low , int mid , int high){
    int i = low , j = mid+1 ;
    vector<int>temp;
    while(i <= mid && j <= high){
        if(nums[i] <= nums[j]){
            temp.push_back(nums[i]);
            i++;
        }else{
            temp.push_back(nums[j]);
            j++;
        }
    }
    while(i <= mid){
        temp.push_back(nums[i]);
        i++;
    }
    while(j <= high){
        temp.push_back(nums[j]);
        j++;
    }
    for(int k = low ; k <= high ; k++){
        nums[k] = temp[k-low];
    }
}
void MergeSort(vector<int>&nums ,int low,int high){
    if(low >= high) return ;
    int mid = low + (high-low)/2 ;

    MergeSort(nums,low,mid);
    MergeSort(nums,mid+1,high);

    Merge(nums,low,mid,high);
}

int main(){
    vector<int>nums = {3,1,2,4,1,5,2,6,4};
    int high = nums.size()-1 ;
    int low = 0 ;

    MergeSort(nums,low,high);

    for(auto it : nums) cout<<it<<" ";
}