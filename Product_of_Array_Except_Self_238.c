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