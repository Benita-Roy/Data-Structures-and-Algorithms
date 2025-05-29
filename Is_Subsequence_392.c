//LEETCODE Question:392 Difficulty:Easy
/*Given two strings s and t, return true if s is a subsequence of t, or false otherwise.

A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (i.e., "ace" is a subsequence of "abcde" while "aec" is not).*/
#include<stdbool.h>
bool isSubsequence(char* s, char* t) {
    //to track position in string t 
    int i=0;
    //to track position in string s
    int j=0;
    //iterate over string t 
    while(j<strlen(t))
    {
        //if the characters match, move forward in both strings
        if(s[i]==t[j])
        {
            i++;
            j++;
        }

        //if the characters don't match, move forward in only the string t to see if there is a match elsewhere
        else
        {
            j++;
        }
    }

    //if at the end the entire pattern was a match then return true 
    if(i==strlen(s))
    {
        return true;
    }

    //else return false
    return false;
}
