#include<stdbool.h>
bool isPalindrome(int x) {
    int length=0;
    long y=(long)x;
    
    if(x==0)
    {
        return true;
    }
    else if(x<0)
    {
        return false;
    }
    
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