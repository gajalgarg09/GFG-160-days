#include<iostream>
#include<vector>
using namespace std;

class solution{
    public:
        int singleDigit(int n) {
        
        // Using direct formula
        if( n == 0){
            return 0;
        }
        
        else{
            return ((n-1)%9) + 1;
        }
        
        
        // using loops
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