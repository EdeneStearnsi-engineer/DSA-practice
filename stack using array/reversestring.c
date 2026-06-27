#include<stdio.h>
#include<string.h>
#define max 50
char stack[max];
int top=-1;
void push(char ch)
{
    if(top==max-1)
    {
        return;
    }
    top++;
    stack[top]=ch;
    return;
}
char pop()
{
    if(top==-1)
    {
        return '\0';
    }
    char ch=stack[top];
    top--;
    return ch;
}
int main()
{
    char str[50];
    int i;
    printf("Enter string");
   // scanf("%s",str);
   fgets(str,sizeof(str),stdin);
    for(i=0;str[i]!='\0';i++)
    {
        push(str[i]);
    }
    printf("Reversed string:");
    while(top!=-1)
    {
        printf("%c",pop());

    }
    return 0;
}
SAMPLE OUTPUT

PS C:\Users\Lenovo\Favorites> gcc reverse.c -o reverse
PS C:\Users\Lenovo\Favorites> ./reverse.exe           
Enter string Trying to build my skills in DSA
Reversed string:
ASD ni slliks ym dliub ot gniyrT 
PS C:\Users\Lenovo\Favorites> gcc reverse.c -o reverse
PS C:\Users\Lenovo\Favorites> ./reverse.exe           
Enter string H E L L O
Reversed string:
O L L E H 
PS C:\Users\Lenovo\Favorites> 





