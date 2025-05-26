/*Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.*/
#include <stdbool.h>
bool isValid(char* s) {
    char stack[strlen(s)];
    int top=-1;
    for(int i=0;i<strlen(s);i++)
    {   
        if(s[i]=='('||s[i]=='['||s[i]=='{')
        {
            top++;
            stack[top]=s[i];
        }

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

        else if(top==-1)
        {
            return false;
        }
    }

    if(top==-1)
    {
        return true;
    }
    return false;
}
