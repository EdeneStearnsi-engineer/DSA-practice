#include<stdio.h>
void replace()
{
     char str[25];
     char old,new;
     int i;

     printf("Enter string: ");
     fgets(str,sizeof(str),stdin);

     printf("Enter character to replace: ");
     scanf("%c",&old);

     printf("Enter new character: ");
     scanf(" %c",&new);

     i=0;

     while(str[i]!='\0')
     {
        if(str[i]==old)
        {
            str[i]=new;
        }
         i++;
     }

    printf("modified string: %s",str);
}
int main()
{
    replace();
}

SAMPLE OUTPUT

PS C:\Users\Lenovo\Favorites> gcc replace.c -o replace
PS C:\Users\Lenovo\Favorites> ./replace.exe           
Enter string: welcome to technology
Enter character to replace: o
Enter new character: e
modified string: welceme te technelegy
PS C:\Users\Lenovo\Favorites> ./replace.exe
Enter string: banana
Enter character to replace: n
Enter new character: a
modified string: baaaaa
PS C:\Users\Lenovo\Favorites> 

