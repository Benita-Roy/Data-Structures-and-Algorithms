//LEETCODE Question:20 Difficulty:Easy
/*Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.*/
#include <stdbool.h>
bool isValid(char* s) {
    //initialising a stack with a size equivalent to that of the input char array
    char stack[strlen(s)];
    int top=-1;
    for(int i=0;i<strlen(s);i++)
    {   
        //if openeing brace then push onto stack
        if(s[i]=='('||s[i]=='['||s[i]=='{')
        {
            top++;
            stack[top]=s[i];
        }

        //else if the stack is not empty and matching brace is found, pop from stack, and if not the matching brace return false, since an opening brace for this char isn't present
        else if(top!=-1)
        {
            if(stack[top]=='('&&s[i]==')')
            {
                top--;
            }
            else if(stack[top]=='['&&s[i]==']')
            {
                top--;
            }
            else if(stack[top]=='{'&&s[i]=='}')
            {
                top--;
            }
            else
            {
                return false;
            }
        }

        //in other cases in which stack is empty return false
        else if(top==-1)
        {
            return false;
        }
    }

    //if all opening braces has its closing brace then the parantheses array is valid
    if(top==-1)
    {
        return true;
    }
    
    return false;
}
