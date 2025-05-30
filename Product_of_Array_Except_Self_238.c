//LEETCODE Question:238 Difficulty:Medium
/*Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

You must write an algorithm that runs in O(n) time and without using the division operation.*/
/**
 * Note: The returned array must be malloced, assume caller calls free().
*/
int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    int* output=(int*)malloc(sizeof(int)*numsSize);

    //for the first element prefix product is 1 since there is no element before it 
    output[0]=1;
    //first pass to find prefix prdouct
    for(int i=1;i<numsSize;i++)
    {
        output[i]=output[i-1]*nums[i-1];
    }

    //suffix product for the last element is one
    int suffix=1;
    //second pass to find suffix product
    for(int i=numsSize-1;i>=0;i--)
    {
        output[i]*=suffix;
        suffix*=nums[i];
    }

    //return the output array size to the caller
    *returnSize=numsSize;
    return output;
}
