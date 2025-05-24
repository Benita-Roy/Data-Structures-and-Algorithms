int majorityElement(int* nums, int n) 
{
    int a[n];
    int maj;
    float x=(float)n/(float)2;
    a[0]=1;
    int i;
    if(n==1)
    {
        return nums[0];
    }
    
    for(i=1;i<n;i++)
    {  
        int j=i-1;
        while(j>=0)
        {
            if(nums[i]!=nums[j])
            {
                j--;
            }

            else
            {
                a[i]=a[j]+1;
                if((float)a[i]>x)
                {   
                    maj=nums[i];
                }
                break;
            }
        }
        if(j<0)
        {
            a[i]=1;
        }
    }
    
    return maj;
}