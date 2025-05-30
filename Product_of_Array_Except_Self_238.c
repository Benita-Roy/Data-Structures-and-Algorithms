//LEETCODE Question:238 Difficulty:Medium
/*Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

You must write an algorithm that runs in O(n) time and without using the division operation.*/
/**
 * Note: The returned array must be malloced, assume caller calls free().
*/
int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    int* output=(int*)malloc(sizeof(int)*numsSize);
     
    output[0]=1;
    for(int i=1;i<numsSize;i++)
    {
        output[i]=output[i-1]*nums[i-1];
    }

    int suffix=1;
    for(int i=numsSize-1;i>=0;i--)
    {
        output[i]*=suffix;
        suffix*=nums[i];
    }
    
    *returnSize=numsSize;
    return output;
}
