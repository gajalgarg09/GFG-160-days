// A sorted array of distinct elements arr[] is rotated at some unknown point, the task is to find the minimum element in it. 

#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
        int findMin(vector<int>& arr) {
        int n = arr.size();
        int min = arr[0];
        
        for(int i =0; i<n; i++){
            if( arr[i] < min){
                min = arr[i];
            }
        }
        return min;
    }
};
  
