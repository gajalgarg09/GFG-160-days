// You are given an array arr[] of non-negative integers. Your task is to move all the zeros in the array to the right end 
// while maintaining the relative order of the non-zero elements. The operation must be performed in place, 
// meaning you should not use extra space for another array.

#include<iostream>
#include<vector>
using namespace std;

class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        
        int n = arr.size();
        int j = 0;
        for(int i =0; i<n; i++){
            if(arr[i] != 0){
                swap(arr[i] , arr[j]);
                j++;
            }
        }
    }
};
