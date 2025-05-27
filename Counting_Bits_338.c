/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countBits(int n, int* returnSize) {
    int* result;
   *returnSize=n+1;
    result = (int *)malloc((*returnSize) * sizeof(int));
    result[0]=0;
    if(n>=1)
    {
        result[1]=1;
    }
    for(int i=2;i<*returnSize;i++)
    {
        if(i%2==0)
        {
            result[i]=result[i/2];
        }

        else
        {
            result[i]=result[i/2]+1;
        }
        
    }
    return result;
}