#include<stdio.h>
#include<stdlib.h>
struct node
{
    int id;
    char name[20];
    char dept[20];
    struct node*next;
};
struct node*head=NULL,*temp,*newnode;
void insertbeg()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter student id: ");
    scanf("%d",&newnode->id);
    printf("enter student name: ");
    scanf("%s",newnode->name);
   printf("enter student department: ");
    scanf("%s",newnode->dept);
    newnode->next=head;
    head=newnode;
    printf(" student details added successfully\n");
}
void insertend()
{
    newnode=(struct node*)malloc(sizeof(struct node));

    printf("enter student id: ");
    scanf("%d",&newnode->id);
    printf("enter student name: ");
    scanf("%s",newnode->name);
   printf("enter student department: ");
    scanf("%s",newnode->dept);
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
  printf("student details added successfully\n");
}

void insertpos()
{
    int pos,i;
   newnode=(struct node*)malloc(sizeof(struct node));
     printf("enter position: ");
    scanf("%d",&pos);
    if(pos<1)
    {
        printf("invalid position");
        return;
    }
    else
    {
        temp=head;
       for(i=1;i<pos-1&&temp!=NULL;i++)
        {
            temp=temp->next;
        }
        if(temp==NULL)
        {
            printf("positon greater then list size\n");
            free(newnode);
        }
        else
        {
                printf("enter id to insert: ");
                scanf("%d",&newnode->id);
                printf("enter student name: ");
                scanf("%s",newnode->name);
                printf("enter student department: ");
                scanf("%s",newnode->dept);
            if(pos==1)
            {
              newnode->next=head;
              head=newnode;
            }
            else
            {
                newnode->next=temp->next;
                temp->next=newnode;
            }
            printf("student details added successfully\n");
        }
    }
}
void deletenode()
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
      return;
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

    printf(" student removed successfully\n");
}

void search()
{
    int s,found=0;
    printf("enter id to search: ");
    scanf("%d",&s);
    temp=head;
    while(temp!=NULL)
    {
        if(temp->id==s)
        {
            found=1;
            printf("-------------------------\n");
            printf("student id: %d\n",temp->id);
            printf("student name:%s\n",temp->name);
            printf("department name: %s\n",temp->dept);
            printf("-------------------------\n");
            break;
        }
         temp=temp->next;
    }

    if(found==0)
    {
        printf("student id not found\n");
    }
}
void display()
{
    temp=head;
    if(temp==NULL)
    {
        printf("registration list is empty\n");
    }
    else
    {
        printf("-------REGISTRATION LIST-------\n");
        while(temp!=NULL)
        {
            printf("-------------------------\n");
            printf("student id: %d\n",temp->id);
            printf("student name:%s\n",temp->name);
            printf("department name: %s\n",temp->dept);
            printf("-------------------------\n");
            printf("\n");
            temp=temp->next;
        }
    }
}
int main()
{
    int ch;
    do
    {
        printf("enter\n1:register student at beginning\n2:register student at end\n3:register student at specific position\n4:cancel student\n5:search\n6:display\n7:exit\n enter your choice: ");
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
                deletenode();
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
    } while(ch!=7);
        return 0;
}

SAMPLE OUTPUT

PS C:\Users\Lenovo\Favorites> gcc list.c -o list
PS C:\Users\Lenovo\Favorites> ./list.exe        

enter
1:register student at beginning
2:register student at end
3:register student at specific position
4:cancel student
5:search
6:display
7:exit
 enter your choice: 1
enter student id: 101
enter student name: edene
enter student department: CSE
 student details added successfully

enter
1:register student at beginning
2:register student at end
3:register student at specific position
4:cancel student
5:search
6:display
7:exit
 enter your choice: 2
enter student id: 102
enter student name: stearnsi
enter student department: ECE
student details added successfully

enter
1:register student at beginning
2:register student at end
3:register student at specific position
4:cancel student
5:search
6:display
7:exit
 enter your choice: 3
enter position: 0
invalid position
enter
1:register student at beginning
2:register student at end
3:register student at specific position
4:cancel student
5:search
6:display
7:exit
 enter your choice: 3
enter position: 6
positon greater then list size

enter
1:register student at beginning
2:register student at end
3:register student at specific position
4:cancel student
5:search
6:display
7:exit
 enter your choice: 3
enter position: 1
enter id to insert: 100
enter student name: priya
enter student department: EEE
student details added successfully

enter
1:register student at beginning
2:register student at end
3:register student at specific position
4:cancel student
5:search
6:display
7:exit
 enter your choice: 6
-------REGISTRATION LIST-------
-------------------------
student id: 100
student name:priya
department name: EEE
-------------------------

-------------------------
student id: 101
student name:edene
department name: CSE
-------------------------

-------------------------
student id: 102
student name:stearnsi
department name: ECE
-------------------------


enter
1:register student at beginning
2:register student at end
3:register student at specific position
4:cancel student
5:search
6:display
7:exit
 enter your choice: 4
enter id to cancel: 102
 student removed successfully

enter
1:register student at beginning
2:register student at end
3:register student at specific position
4:cancel student
5:search
6:display
7:exit
 enter your choice: 4
enter id to cancel: 34
id not found

enter
1:register student at beginning
2:register student at end
3:register student at specific position
4:cancel student
5:search
6:display
7:exit
 enter your choice: 5
enter id to search: 100
-------------------------
student id: 100
student name:priya
department name: EEE
-------------------------

enter
1:register student at beginning
2:register student at end
3:register student at specific position
4:cancel student
5:search
6:display
7:exit
 enter your choice: 6
-------REGISTRATION LIST-------
-------------------------
student id: 100
student name:priya
department name: EEE
-------------------------

-------------------------
student id: 101
student name:edene
department name: CSE
-------------------------


enter
1:register student at beginning
2:register student at end
3:register student at specific position
4:cancel student
5:search
6:display
7:exit
 enter your choice: 7
EXIT
PS C:\Users\Lenovo\Favorites> 
