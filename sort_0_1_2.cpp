#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    void sort012(vector<int> &arr){
        int n = arr.size();
        int index1 = 0;
        int index2 = n - 1;
        int i = 0;

        while (i <= index2){
            if (arr[i] == 0){
                swap(arr[i], arr[index1]);
                index1++;
                i++;
            }
            else if (arr[i] == 2){
                swap(arr[i], arr[index2]);
                index2--;
            }
            else{
                i++;
            }
        }
    }
};