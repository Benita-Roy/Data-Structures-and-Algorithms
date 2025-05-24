
int removeDuplicates(int* nums, int n) {
    
    //to count the number of unique elements in the given array
    int count=0;
    
    //the flag is stratergically chosen as the highest value element in the array plus 1(given it is sorted)
    int flag=nums[n-1]+1;

    //replacing duplicates by the flag in 0(n)
    int i;
    for(i=1;i<n;i++)
    {
        int j=i-1;
        if(nums[i]==nums[j])
        {
            nums[j]=flag;
        }
    } 

    //complexity can be improved by a large extent by changing the sorting method used below - now O(n^2)
    for(i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(nums[i]>nums[j])
            {
                int temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
            }
        }
    }

    //counting the unique elements (can be done early on)
    for(i=0;i<n;i++)
    {   
        if(nums[i]!=flag)
        {
            count++;
        }
    }
    
    return count;
}
