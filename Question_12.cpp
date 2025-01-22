// Given an array arr[] and an integer k where k is smaller than the size of the array, 
// the task is to find the kth smallest element in the given array.
// Follow up: Don't solve it using the inbuilt sort function.

#include<iostream>
#include<vector>
using namespace std;

class solution{
    public:
        int kthSmallest(vector<int> &arr, int k) {
        // Method - 1 (using inbuilt function)
        // int n = arr.size();
        
        // sort(arr.begin() , arr.end());
        
        // return arr[k-1];
        
        // Method - 2 
        int n = arr.size();
        
        for(int i =0; i<k; i++){
            int minIndex = i;
            
            for(int j = i+1; j<n; j++){
                if( arr[j] < arr[minIndex]){
                    minIndex = j;
                }
            }
            swap(arr[i] , arr[minIndex]);
        }
        return arr[k-1];
    }
};
