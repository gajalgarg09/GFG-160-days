// You are given a positive integer n, you need to add all the digits of n and create a new number. 
// Perform this operation until the resultant number has only one digit in it. Return the final number obtained after performing the given operation.

#include<iostream>
#include<vector>
using namespace std;

class solution{
    public:
        int singleDigit(int n) {
        
        // Method - 1 (Using direct formula)
        if( n == 0){
            return 0;
        }
        else{
            return ((n-1)%9) + 1;
        }
        
        // Method - 2 (using loops)
        while( n >= 10){
            int sum =0;
            
            while( n > 0){
                sum = sum + (n%10);
                n = n / 10;
            }
            n = sum;
        }
        return n;  
    }
};
