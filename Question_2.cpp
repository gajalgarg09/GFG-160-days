You are given an array of integers arr[]. Your task is to reverse the given array.
Note: Modify the array in place.

#include<iostream>
#include<vector>
using namespace std;

class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
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
