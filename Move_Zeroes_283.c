//LEETCODE Q:283
//Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
//Note that you must do this in-place without making a copy of the array.
void moveZeroes(int* nums, int numsSize) 
{
    int i=0;
    int j=0;
    while(i<numsSize&& j<numsSize && i<=j)
    {
        if(nums[i]==0)
        {
            if(nums[j]==0)
            {
                j++;
            }

            else
            {
                int temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
            }
        }

        else
        {
            i++;
            j++;
        }
    }
}