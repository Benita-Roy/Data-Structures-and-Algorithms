//LEETCODE Question:392 Difficulty:Easy
#include<stdbool.h>
bool isSubsequence(char* s, char* t) {
    int i=0;
    int j=0;
    while(j<strlen(t))
    {
        if(s[i]==t[j])
        {
            i++;
            j++;
        }

        else
        {
            j++;
        }
    }

    if(i==strlen(s))
    {
        return true;
    }

    return false;
}
