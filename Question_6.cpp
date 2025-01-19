// Given a sorted array, arr[] and a number target, you need to find the number of occurrences of target in arr[]. 

#include<iostream>
#include<vector>
using namespace std;

class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        int count = 0;
        for(int i =0; i<arr.size(); i++){
            if(arr[i] == target){
                count++;
            }
        }
        return count;
    }
};
