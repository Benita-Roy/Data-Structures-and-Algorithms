int removeDuplicates(int* nums, int n) {
    int i;
    int count=0;
    int flag=nums[n-1]+1;

    for(i=1;i<n;i++)
    {
        int j=i-1;
        if(nums[i]==nums[j])
        {
            nums[j]=flag;
        }
    } 

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

    for(i=0;i<n;i++)
    {   
        if(nums[i]!=flag)
        {
            count++;
        }
    }
    
    return count;
}
