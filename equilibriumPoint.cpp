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