//LEETCODE Question:169 Difficulty:Easy
/*Given an array nums of size n, return the majority element.
The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.*/
int majorityElement(int* nums, int n) 
{
    //declaring an array tokeep count of occurances of each element in nums array
    int a[n];
    //maj to store the majority element
    int maj;
    //x is used to check if an element is the majority element 
    float x=(float)n/(float)2;
    //first elements occurance is marked as 1
    a[0]=1;

    //if the array contains only one element then that element is returned as the emajority element
    if(n==1)
    {
        return nums[0];
    }

    //else using 2 pointers i and j, check previous occurances and update the array a and the pointer values
    int i;
    for(i=1;i<n;i++)
    {  
        //check backward for previous occurance of nums[i] by looking at the count value in array a 
        int j=i-1;
        while(j>=0)
        {
            if(nums[i]!=nums[j])
            {
                j--;
            }

            else
            {
                //if an occurance is found then the count of element is a value more than the previous count 
                a[i]=a[j]+1;
                
                //check if the element is the majority element
                if((float)a[i]>x)
                {   
                    maj=nums[i];
                }
                
                //if a previous occurance is found of nums[i] stop decrementing j and move to the next element in nums array and repeat the process
                break;
            }
        }

        //if no previous occurance of nums[i] was found then put the value as 1 i.e. first occurance of that element (prevents garbage values from corrupting the array a and hence the result)
        if(j<0)
        {
            a[i]=1;
        }
    }
    
    return maj;
}
