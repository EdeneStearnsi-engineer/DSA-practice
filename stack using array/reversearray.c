#include<stdio.h>
#define max 50
int top=-1;
int stack[max];
void push(int item)
{
    if(top>=max-1)
    {
        return;
    }
    top++;
    stack[top]=item;
    return;

}
int pop()
{
    if(top==-1)
    {
        return 0;
    }
    return stack[top--];
}
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        push(arr[i]);
    }
    printf("Reversed array:");
   while(top!=-1)
   {
          printf("%d ",pop());
   }
   return 0;
}
SAMPLE OUTPUT

PS C:\Users\Lenovo\Favorites> gcc reversen.c -o reversen
PS C:\Users\Lenovo\Favorites> ./reversen.exe            
Enter n: 4     
Enter array:10 20 30 40
Reversed array:40 30 20 10 
PS C:\Users\Lenovo\Favorites> gcc reversen.c -o reversen
PS C:\Users\Lenovo\Favorites> ./reversen.exe            
Enter n:7
Enter array:10 20 30 40 50 60 70
Reversed array:70 60 50 40 30 20 10 
PS C:\Users\Lenovo\Favorites> 


