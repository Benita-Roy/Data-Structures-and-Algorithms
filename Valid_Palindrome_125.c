//LEETCODE Question:125 Difficulty:Easy
/*A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.*/
#include<stdbool.h>
bool isPalindrome(char* s) {
    if(strlen(s)==0)
    {return true;}
    char spliced[strlen(s)];
    int j=-1;
    
    for(int i=0;i<strlen(s);i++)
    {
        if((s[i]>=97&&s[i]<=122)||(s[i]>=65&&s[i]<=90)||(s[i]>=48&&s[i]<=57))
        {
            j++;
            spliced[j]=s[i];
        }
    }
    if(j<=0)
    {
        return true;
    }

    if(j>0)
    {
    char rev[j+1];
    
    
    int k=-1;
    for(int i=j;i>=0;i--)
    {
        k++;
        rev[k]=spliced[i];
    }

    bool result=true;
    for(int m=0;m<=j;m++)
    {
        if(tolower(spliced[m])!=tolower(rev[m]))
        {
            return false;
        }
    }
    }
    return true;
}
