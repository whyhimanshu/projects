#include <stdio.h>
#include<stdbool.h>

#define max 30
int ParenthesesCheck(char *arr)
{
    char stack[max];
    int top = -1;
    for (int i = 0; i < max; i++)
    {
        if (arr[i] == '(')
        {
            if (top == max - 1)
            {
                printf("Stack is Full");
            }
            else
            {
                top = top + 1;
                stack[top] = '(';
            }
        }
        else if (arr[i] == ')')
        {
            top = top - 1;
        }
    }

        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    
}
int main()
{
    char arr[] = "((22+2)-4(4+4))";
    int a = ParenthesesCheck(arr);
    printf("After checking we found :\n");
    if (a == true)
    {
        printf("Statement Parenthese check good");
    }
    else
    {
        printf("No,statemnet /expression is incorrect");
    }
    return 0;
}