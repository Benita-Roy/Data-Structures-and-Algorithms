//LEETCODE Question:189 Difficulty:Medium
/*Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.*/
void reverse(int * arr,int x,int y)
{   
    int start=x;
    int end=y;
    while(start<end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}

void rotate(int* nums, int numsSize, int k) {
        k=k%numsSize;
        reverse(nums,0,numsSize-1);
        reverse(nums,0,k-1);
        reverse(nums,k,numsSize-1);
}
