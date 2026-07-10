#include<stdio.h>
#include<ctype.h>
int stack[20];
int top=-1;
void push(int x)
{
    top++;
    stack[top]=x;
}
int pop()
{
    return stack[top--];
}
void calculate(char exp[])
{
    int op1,op2,result;
    for(int i=0;exp[i]!=0;i++)
    {
        if(isdigit(exp[i]))
        {
            push(exp[i]-'0');
        }

        else
        {
            op2=pop();
            op1=pop();

            switch(exp[i])
            {
                case '+':
                result=op1+op2;
                break;

                case'-':
                result=op1-op2;
                break;

                case '*':
                result=op1*op2;
                break;

                case '/':
                result=op1/op2;
                break;
            }

            push(result);

        }
       
    }
    printf("result:%d",pop());
         

}
int main()
{
    char exp[20];
    printf("enter expression:");
    scanf("%s",exp);
    calculate(exp);
    return 0;
}

SAMPLE OUTPUT

PS C:\Users\Lenovo\Favorites> gcc post.c -o post
PS C:\Users\Lenovo\Favorites> ./post.exe        
enter expression:23+5*
result:25
PS C:\Users\Lenovo\Favorites> gcc post.c -o post
PS C:\Users\Lenovo\Favorites> ./post.exe        
enter expression:23+54-62+/+
result:5
PS C:\Users\Lenovo\Favorites> gcc post.c -o post
PS C:\Users\Lenovo\Favorites> ./post.exe        
enter expression:82/35+*64-+
result:34
PS C:\Users\Lenovo\Favorites> 

  
