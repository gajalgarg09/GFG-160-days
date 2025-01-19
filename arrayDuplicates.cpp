#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution{
    public :
        vector<int> findDuplicates(vector<int>& arr) {
        sort(arr.begin() , arr.end());
        int n = arr.size();
        
        vector<int> ans;
        
        for(int i = 0; i<n-1; i++){
            if( arr[i] == arr[i+1]){
                ans.push_back(arr[i]);
            }
        }
        return ans;
    }
};