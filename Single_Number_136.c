//LEETCODE Question:136 Difficulty:Easy
/*Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
You must implement a solution with a linear runtime complexity and use only constant extra space.*/

/*--NEEDED TO LEARN ABOUT THIS XOR PROPERTY TO IMPLEMENT THIS IN THE REQUIRED COMPLEXITY--*/
int singleNumber(int* nums, int numsSize) {
    int result=0;
    for(int i=0;i<numsSize;i++)
    {
        result=nums[i]^result;
    }
    return result;
}
