// In this ques we have to find maximum sum of a contigenous subarray so by using Kadane's algo we ignore negative elements by making currsum equal to zero when currsum goes in negative, this will ignore the current subarray and will start new subarray from the next element and then we will check with this next subarray for the maxim sum

#include<iostream>
#include<stdlib.h>
using namespace std;

long long maxSubarraySum(int arr[], int n){
        
        // Your code 
        int Max=INT_MIN;
        long long currsum=0;
        for(int i=0;i<n;i++){
            currsum+=arr[i];
            if(Max<currsum){
                Max=currsum;
            }
            if(currsum<0){
                currsum=0;
            }
        }
        return Max;
        
    }

int main(){

return 0;
}

// ques no. 12 of level 2 in gfg top 50 array problems