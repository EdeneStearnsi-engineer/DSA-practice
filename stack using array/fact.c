#include<stdio.h>
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
void display()
{
    int i;
    if(top==-1)
    {
        printf("stack is empty");
    }
    printf("stack:\n");
    for(i=top;i>=0;i--)
    {
        printf("factorial(%d)\n",stack[i]);
    }
    printf("\n");
}
int fact(int n)
{
    int result;
    printf("call factorial(%d)\n",n);
    push(n);
    display();
    if(n==0||n==1)
    {
        return 1;
    }
    else
    {
       result=n*fact(n-1);
    }
       printf("returning factorial(%d)\n",n);
       pop();
       display();
       return result;
}
int main()
{
  int num;
  printf("enter number:");
  scanf("%d",&num);
  int factorial=fact(num);
  printf("\n");
  printf("factorial is: %d",factorial);
  return 0;
}

SAMPLE OUTPUT

PS C:\Users\Lenovo\Favorites> gcc fact.c -o fact
PS C:\Users\Lenovo\Favorites> ./fact.exe        
enter number:4
call factorial(4)
stack:
factorial(4)

call factorial(3)
stack:
factorial(3)
factorial(4)

call factorial(2)
stack:
factorial(2)
factorial(3)
factorial(4)

call factorial(1)
stack:
factorial(1)
factorial(2)
factorial(3)
factorial(4)

returning factorial(2)
stack:
factorial(2)
factorial(3)
factorial(4)

returning factorial(3)
stack:
factorial(3)
factorial(4)

returning factorial(4)
stack:
factorial(4)


factorial is: 24
PS C:\Users\Lenovo\Favorites> 
