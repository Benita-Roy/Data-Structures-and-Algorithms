//LEETCODE Question:9 Difficulty:Easy
/*
Given an integer x, return true if x is a palindrome, and false otherwise.
Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
Example 3:

Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.*/
#include<stdbool.h>
bool isPalindrome(int x) {
    int length=0;
    //to prevent overflow store it as long instead of int 
    long y=(long)x;
    // base cases return true if 0, false if negative
    if(x==0)
    {
        return true;
    }
    else if(x<0)
    {
        return false;
    }

    //reverse the number and then check for equality
    else
    {
        long rev=0;
        long copy=x;
        long digit;

        while(copy>0)
        {
            digit=copy%10;
            rev=rev*10+digit;
            copy=copy/10;
        }

        if(rev==x)
        {
            return true;
        }
    }
    return false;
}
