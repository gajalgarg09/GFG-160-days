// Given an array of integers arr[], the task is to find the first equilibrium point in the array.
// The equilibrium point in an array is an index (0-based indexing) such that the sum of all elements before that 
// index is the same as the sum of elements after it. Return -1 if no such point exists.

#include<iostream>
#include<vector>
using namespace std;

class solution{
    public: 
        int findEquilibrium(vector<int> &arr) {

            int totalSum = 0;
            int leftSum = 0;
            int n = arr.size();

            if( n == 0){
                return -1;
            }

            for(int i =0; i<n; i++){
                totalSum += arr[i];
            }

            for(int i =0; i<n; i++){
                if(leftSum == totalSum - arr[i] - leftSum){
                    return i;
                }
                leftSum += arr[i];
            }
         return -1; 
    }

};
