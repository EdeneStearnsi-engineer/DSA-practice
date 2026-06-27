#include<stdio.h>
#include<conio.h>
#define max 50
int top=-1;
int stack[max];
void push()
{
   int item;
  if(top>=max-1)
  {
    printf("stack full\n");
    return;
  }
  printf("Enter element:");
  scanf("%d",&item);
  top++;
  stack[top]=item;
  printf("%d is inserted\n",stack[top]);
}
void pop()
{
    if(top==-1)
    {
        printf("stack empty\n");
        return;
    }
    printf("%d is deleted\n",stack[top]);
    top--;
    return;
  
}
void peek()
{
    if(top==-1)
    {
        printf("stack empty\n");
        return;
    }
    printf("%d is the top element\n",stack[top]);
    return;
}
void size()
{
    if(top==-1)
    {
        printf("stack empty\n");
        return;
    }
     printf("%d is the size\n",top+1);

}
void display()
{
    int i;
      if(top==-1)
    {
        printf("stack empty\n");
        return;
    }
    printf("stack elements: ");
    for(i=top;i>=0;i--)
    {
        printf("%d ",stack[i]);
        printf("\n");
    }

}
int main()
{
    int ch;
    do
    {
        printf("-----------------------------------------\n");
        printf("Enter\n1:push\n2:pop\n3:peek\n4:size\n5:display\n6:exit\nEnter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            push();
            break;

            case 2:
            pop();
            break;

            case 3:
            peek();
            break;

            case 4:
            size();
            break;

            case 5:
            display();
            break;

            case 6:
            printf("Exit");
            break;

            default:
            printf("invalid choice");
            break;
        }
    } while (ch!=6);
      return 0;
}

SAMPLE OUTPUT

PS C:\Users\Lenovo\Favorites> gcc welcome.c -o welcome  
PS C:\Users\Lenovo\Favorites> ./welcome.exe           
-----------------------------------------
Enter
1:push
2:pop
3:peek
4:size
5:display
6:exit
Enter your choice:1
Enter element:10
10 is inserted
-----------------------------------------
Enter
1:push
2:pop
3:peek
4:size
5:display
6:exit
Enter your choice:1
Enter element:20
20 is inserted
-----------------------------------------
Enter
1:push
2:pop
3:peek
4:size
5:display
6:exit
Enter your choice:1
Enter element:30
30 is inserted
-----------------------------------------
Enter
1:push
2:pop
3:peek
4:size
5:display
6:exit
Enter your choice:5
stack elements: 30 
20 
10 
-----------------------------------------
Enter
1:push
2:pop
3:peek
4:size
5:display
6:exit
Enter your choice:3
30 is the top element
-----------------------------------------
Enter
1:push
2:pop
3:peek
4:size
5:display
6:exit
Enter your choice:4
3 is the size
-----------------------------------------
Enter
1:push
2:pop
3:peek
4:size
5:display
6:exit
Enter your choice:2
30 is deleted
-----------------------------------------
Enter
1:push
2:pop
3:peek
4:size
5:display
6:exit
Enter your choice:2
20 is deleted
-----------------------------------------
Enter
1:push
2:pop
3:peek
4:size
5:display
6:exit
Enter your choice:5
stack elements: 10 
-----------------------------------------
Enter
1:push
2:pop
3:peek
4:size
5:display
6:exit
Enter your choice:4
1 is the size
-----------------------------------------
Enter
1:push
2:pop
3:peek
4:size
5:display
6:exit
Enter your choice:6
Exit
PS C:\Users\Lenovo\Favorites> 
