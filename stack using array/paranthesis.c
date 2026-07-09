#include<stdio.h>
#define max 20
char stack[max];
int top=-1;
void push(char exp)
{
  if(top>=max-1)
  {
    return;
  }
    top++;
    stack[top]=exp;
}
char pop()
{
        if(top==-1)
        {
           return '\0';
         }
    return stack[top--];
}
int balance(char exp[])
{
    for(int i=0;exp[i]!='\0';i++)
    {
        if(exp[i]=='['||exp[i]=='{'||exp[i]=='(')
        {
            push(exp[i]);
        }
        else if(exp[i]==']'||exp[i]=='}'||exp[i]==')')
        {
            if(top==-1)
            {
                return 0;
            }
            char ch=pop();
            if((exp[i]==']'&&ch!='[')||(exp[i]=='}'&&ch!='{')||(exp[i]==')'&&ch!='('))
            {
                return 0;
            }

        }
    }
   if(top==-1)
   {
    return 1;
   }
   else
   {
     return 0;
   }
}
int main()
{
    char exp[20];
    printf("Enter expression:");
    scanf("%s",exp);
    if(balance(exp))
    {
        printf("Eqn is balanced");
    }
    else
    {
        printf("Eqn is not balanced");
    }
    return 0;
}

SAMPLE OUTPUT

PS C:\Users\Lenovo\Favorites> gcc para.c -o para
PS C:\Users\Lenovo\Favorites> ./para.exe        
Enter expression:{[(a+b)*c]}
Eqn is balanced
PS C:\Users\Lenovo\Favorites> gcc para.c -o para
PS C:\Users\Lenovo\Favorites> ./para.exe        
Enter expression:(a+b]*(c-d)
Eqn is not balanced
PS C:\Users\Lenovo\Favorites> 

