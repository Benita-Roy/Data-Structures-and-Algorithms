//LEETCODE Question:338 Difficulty:Easy
/*Given an integer n, return an array ans of length n + 1 such that for each i (0 <= i <= n), ans[i] is the number of 1's in the binary representation of i.

Example 1:
Input: n = 2
Output: [0,1,1]
Explanation:
0 --> 0
1 --> 1
2 --> 10*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countBits(int n, int* returnSize) {
    //to store pointer returned by malloc
    int* result;
    //deferencing and initialising value of the size of array to be allocated
    *returnSize=n+1;
    //using malloc to allocate array
    result = (int *)malloc((*returnSize) * sizeof(int));
    
    //base cases for 0 and 1(applicable only if the number is greater than or equal to 1 i.e. size of the array allocated is greater than or equal to 1
    result[0]=0;
    if(n>=1)
    {
        result[1]=1;
    }

    //O(n) i.e. single pass
    //for the rest of the elements the count of bits is equal to the count of bits in the number its half or plus 1 its half when even and odd respectively
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
    //return the resultant array to the caller
    return result;
}
