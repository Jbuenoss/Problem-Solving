/*
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        long long int maior = arr[0], inter = arr[0];
        for(int i = 1; i < n; i++){
            inter = max((long long)arr[i], arr[i]+inter);
            maior = max(inter, maior);
        }
        return maior;
    }
};
*/