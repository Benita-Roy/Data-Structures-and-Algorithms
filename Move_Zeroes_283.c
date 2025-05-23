//LEETCODE Question:283 Difficulty:Easy
/*Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
Note that you must do this in-place without making a copy of the array.*/
void moveZeroes(int* nums, int numsSize) 
{
    //initialise two variables to keep track of the positions of zero and non zero elements to later exchange their positions
    int i=0;
    int j=0;

    //repeat while i and j are both within bounds and i is less than j
    while(i<numsSize&& j<numsSize && i<=j)
    {
        //check if the ith element is zero
        if(nums[i]==0)
        {    
            //check if the jth element is also zero in which case j is incremented till a non-zero element is found
            if(nums[j]==0)
            {
                j++;
            }

            else
            {
                //swap the non-zero element(j) with the zero element(i)
                int temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
            }
        }

        //if the ith element is non zero then increment both i and j to possibly find the next zero
        else
        {
            i++;
            j++;
        }
    }
}
