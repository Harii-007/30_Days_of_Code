KADANE ALGO

class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        long long maxSum=arr[0];
        long long currentSum=0;
        for(int i=0;i<n;i++)
        { 
            currentSum=currentSum+arr[i];
            if(currentSum>maxSum)
            {
                maxSum=currentSum;
            }
            if(currentSum<=0)
            {
                currentSum=0;
            }
        }
        return maxSum;
        
    }
};
