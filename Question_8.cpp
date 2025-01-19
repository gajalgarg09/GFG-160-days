// Given a sorted and rotated array arr[] of distinct elements, the task is to find the index of a target key. Return -1 if the key is not found.

#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public: 
        int search(vector<int>& arr, int key) {
        int n = arr.size();
        
        for(int i =0; i<n; i++){
            if(arr[i] == key){
                return i;
            }
        }
        return -1;
    }
};
