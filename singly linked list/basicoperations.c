#include<stdio.h>
#include<stdlib.h>
struct node
{
   int id;
   struct node*next;
};

struct node*head=NULL,*temp,*newnode;
void insertbeg()
{
   newnode=(struct node*)malloc(sizeof(struct node));
   printf("enter emergency patient id: ");
   scanf("%d",&newnode->id);
   newnode->next=head;
   head=newnode;
   printf(" emergency patient id added successfully\n");
}

void insertend()
{
   newnode=(struct node*)malloc(sizeof(struct node));
   printf("enter regular patientid: ");
   scanf("%d",&newnode->id); 
   newnode->next=NULL;
   if(head==NULL)
   {
      head=newnode;
   }
   else
   {
      temp=head;
      while(temp->next!=NULL)
      {
         temp=temp->next;
      }
         temp->next=newnode;
   }
     printf("regular patient id added successfully\n");
}

void insertpos()
{
    int pos,i;
   newnode=(struct node*)malloc(sizeof(struct node));
   printf("enter position: ");
   scanf("%d",&pos);
   printf("enter id to insert: ");
   scanf("%d",&newnode->id);
      if(pos<1)
      {
         printf("invalid position");
      } 
      else if(pos==1)
      {
         newnode->next=head;
         head=newnode;
      }
      else
      {
         temp=head;
          for(i=1;i<pos-1;i++)
          {
             temp=temp->next;
          }
         newnode->next=temp->next;
         temp->next=newnode;
   
      }
      
        printf("patient id added successfully\n");
}

void delete()
{
   int d;
   struct node*prev;
   printf("enter id to cancel: ");
   scanf("%d",&d);
   temp=head;
   while(temp!=NULL&&temp->id!=d)
   {
      prev=temp;
      temp=temp->next;
   }
   if(temp==NULL)
   {
      printf("id not found\n");
   }
   else if(temp==head)
   {
      head=head->next;
      free(temp);
   }
   else
   {
      prev->next=temp->next;
      free(temp);
   }

    printf(" emergency patient id cancelled successfully\n");
}

void search()
{
   int s,found=0;
   printf("enter id to search:  ");
   scanf("%d",&s);
   temp=head;
   while(temp!=NULL)
   {
      if(temp->id==s)
      {
         found=1;
         break;
      }
      temp=temp->next;
   }

   if(found==0)
   {
      printf("patient id not found\n");
   }
   else
   {
      printf("patient id found\n");
   }
   
}

void display()
{
   temp=head;
    if(temp==NULL)
   {
      printf("id not found\n");
   }
   else
   {
      printf("*****THE PATIENT ID'S*****\n");
        while(temp!=NULL)
        {
           printf("%d ",temp->id);
           temp=temp->next;
         }
  }
}

int main()
{
   int ch;
  do
  {
     printf("\n");
     printf("enter\n1:insert emergency patient\n2:insert regular patient\n3:insert at specific position\n4:cancel appointment id\n5:search\n6:display\n7:exit\n enter your choice: ");
     scanf("%d",&ch);
     
     switch(ch)
     {
        case 1:
        insertbeg();
        break;

        case 2:
        insertend();
        break;

        case 3:
        insertpos();
        break;

        case 4:
        delete();
        break;

        case 5:
        search();
        break;
         
        case 6:
        display();
        break;

        case 7:
        printf("EXIT");
        break;

        default:
        printf("invalid");
        break;
     }
     
  } while (ch!=7);
     return 0;
     
}

SAMPLE OUTPUT
PS C:\Users\Lenovo\Favorites> gcc list.c -o list
PS C:\Users\Lenovo\Favorites> ./list.exe        

enter
1:insert emergency patient
2:insert regular patient
3:insert at specific position
4:cancel appointment id
5:search
6:display
7:exit
 enter your choice: 2
enter regular patientid: 90
regular patient id added successfully

enter
1:insert emergency patient
2:insert regular patient
3:insert at specific position
4:cancel appointment id
5:search
6:display
7:exit
 enter your choice: 2
enter regular patientid: 78
regular patient id added successfully

enter
1:insert emergency patient
2:insert regular patient
3:insert at specific position
4:cancel appointment id
5:search
6:display
7:exit
 enter your choice: 1
enter emergency patient id: 67
 emergency patient id added successfully

enter
1:insert emergency patient
2:insert regular patient
3:insert at specific position
4:cancel appointment id
5:search
6:display
7:exit
 enter your choice: 1
enter emergency patient id: 56
 emergency patient id added successfully

enter
1:insert emergency patient
2:insert regular patient
3:insert at specific position
4:cancel appointment id
5:search
6:display
7:exit
 enter your choice: 3
enter position: 0
enter id to insert: 45
invalid position
enter
1:insert emergency patient
2:insert regular patient
3:insert at specific position
4:cancel appointment id
5:search
6:display
7:exit
 enter your choice: 6
*****THE PATIENT ID'S*****
56 67 90 78 
enter
1:insert emergency patient
2:insert regular patient
3:insert at specific position
4:cancel appointment id
5:search
6:display
7:exit
 enter your choice: 3
enter position: 1
enter id to insert: 20
patient id added successfully

enter
1:insert emergency patient
2:insert regular patient
3:insert at specific position
4:cancel appointment id
5:search
6:display
7:exit
 enter your choice: 6
*****THE PATIENT ID'S*****
20 56 67 90 78 
enter
1:insert emergency patient
2:insert regular patient
3:insert at specific position
4:cancel appointment id
5:search
6:display
7:exit
 enter your choice: 5
enter id to search:  90
patient id found

enter
1:insert emergency patient
2:insert regular patient
3:insert at specific position
4:cancel appointment id
5:search
6:display
7:exit
 enter your choice: 4
enter id to cancel: 90
 emergency patient id cancelled successfully

enter
1:insert emergency patient
2:insert regular patient
3:insert at specific position
4:cancel appointment id
5:search
6:display
7:exit
 enter your choice: 6
*****THE PATIENT ID'S*****
20 56 67 78 
enter
1:insert emergency patient
2:insert regular patient
3:insert at specific position
4:cancel appointment id
5:search
6:display
7:exit
 enter your choice: 3
enter position: 4
enter id to insert: 90
patient id added successfully

enter
1:insert emergency patient
2:insert regular patient
3:insert at specific position
4:cancel appointment id
5:search
6:display
7:exit
 enter your choice: 6
*****THE PATIENT ID'S*****
20 56 67 90 78 
enter
1:insert emergency patient
2:insert regular patient
3:insert at specific position
4:cancel appointment id
5:search
6:display
7:exit
 enter your choice: 7
EXIT
PS C:\Users\Lenovo\Favorites> 
