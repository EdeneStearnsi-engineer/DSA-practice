#include<stdio.h>
#define max 25
int list[max],i,pos,value,n;
void insert()
{
    if(n==max)
    {
        printf("playlist is full\n");
        return;
    }
    printf("Enter value to insert: ");
    scanf("%d",&value);
    printf("Enter position to insert: ");
    scanf("%d",&pos);
    if(pos<1||pos>n+1)
    {
      printf("invalid position");
      return;
    }
    for(i=n;i>=pos;i--)
    {
      list[i]=list[i-1];
    }
    list[pos-1]=value;
    n++;
    printf("songID inserted sucessfully!");
}
void deletesong()
{
    if(n==0)
    {
        printf("playlist is empty\n");
        return;
    }
    printf("Enter position to delete: ");
    scanf("%d",&pos);
    if(pos<1||pos>n)
    {
      printf("invalid position");
      return;
    }
    for(i=pos-1;i<n-1;i++)
    {
      list[i]=list[i+1];
    }
    n--;
    printf("songID deleted sucessfully!");
}
void search()
{
    int s;
    if(n==0)
    {
        printf("playlist is empty\n");
        return;
    }
     printf("Enter songID to search: ");
     scanf("%d",&s);
    for(i=0;i<n;i++)
    {
        if(list[i]==s)
        {
           printf("songID found at position:%d",i+1);
           return;
        }
    }
    printf("songID not found\n");
}

void display()
{
    if(n==0)
    {
        printf("playlist is empty\n");
        return;
    }
    for(i=0;i<n;i++)
    {
           printf("songID :%d found at position: %d ",list[i],i+1);
           printf("\n");

    }

}
int main()
{
    int ch;
    printf("Enter no of songIDs:");
    scanf("%d",&n);
    printf("Enter songIDs:");
    for(i=0;i<n;i++)
    {
           scanf("%d",&list[i]);

    }
    do
    {
      printf("\n");
      printf("Enter 1:insert\n2:delete\n3:search\n4:display\n5:exit\n");
      printf("Enter your choice\n");
      scanf("%d",&ch);
      switch(ch)
      {
         case 1:
         insert();
         break;

         case 2:
         deletesong();
         break;

         case 3:
         search();
         break;

         case 4:
         display();
         break;

         case 5:
         printf("exit");
         break;

         default:
         printf("invalid choice");
         break;
        }


      
    }while(ch!=5);
      return 0;

}





SAMPLE OUTPUT

PS C:\Users\Lenovo\Favorites> gcc music.c -o music
PS C:\Users\Lenovo\Favorites> ./music.exe         
Enter no of songIDs: 4
Enter songIDs: 34 67 98 45

Enter 1:insert
2:delete
3:search
4:display
5:exit
Enter your choice
1
Enter value to insert: 57
Enter position to insert: 2
songID inserted sucessfully!
Enter 1:insert
2:delete
3:search
4:display
5:exit
Enter your choice
4
songID :34 found at position: 1 
songID :57 found at position: 2 
songID :67 found at position: 3 
songID :98 found at position: 4 
songID :45 found at position: 5 

Enter 1:insert
2:delete
3:search
4:display
5:exit
Enter your choice
2
Enter position to delete: 2
songID deleted sucessfully!
Enter 1:insert
2:delete
3:search
4:display
5:exit
Enter your choice
4
songID :34 found at position: 1 
songID :67 found at position: 2 
songID :98 found at position: 3 
songID :45 found at position: 4 

Enter 1:insert
2:delete
3:search
4:display
5:exit
Enter your choice
3
Enter songID to search: 56
songID not found

Enter 1:insert
2:delete
3:search
4:display
5:exit
Enter your choice
3
Enter songID to search: 34
songID found at position:1
Enter 1:insert
2:delete
3:search
4:display
5:exit
Enter your choice
4
songID :34 found at position: 1 
songID :67 found at position: 2 
songID :98 found at position: 3 
songID :45 found at position: 4 

Enter 1:insert
2:delete
3:search
4:display
5:exit
Enter your choice
5
exit
PS C:\Users\Lenovo\Favorites> 
