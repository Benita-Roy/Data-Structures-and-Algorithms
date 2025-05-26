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