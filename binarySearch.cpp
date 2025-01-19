#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
  public:
    int binarysearch(vector<int> &arr, int k) {
        
        sort(arr.begin() , arr.end());
        int n = arr.size();
        int s = 0;
        int e = n-1; 
        int result = - 1;
        
        while( s <= e){
            int mid = s + (e-s)/2;
            
            if(arr[mid] == k){
                result =  mid;
                e = mid -1;
            }
                
            else if( arr[mid] < k){
                 s = mid+1;
            }
               
            else{
                e = mid-1;
            }
                
        }
       return result; 
    }
};
