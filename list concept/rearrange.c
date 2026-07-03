#include<stdio.h>
int i,j,n,a[20];
int temp;
void rearrange()
{
  printf("Enter n:");
  scanf("%d",&n);
  printf("Enter values of list: ");
  for(i=0;i<n;i++)
  {
     scanf("%d",&a[i]);
  }
  i=0;
  j=n-1;
  while(i<j)
  {
    if(a[i]>=50)
    {
        i++;
    }
    else if(a[j]<=50)
    {
        j--;
    }
    else
    {
      temp=a[i];
      a[i]=a[j];
      a[j]=temp;
    }  
  }

  printf("Rearranged values of list: ");
     for(i=0;i<n;i++)
     {
        printf("%d ",a[i]);
     }
}

int main()
{
    rearrange();
    return 0;
}

SAMPLE OUTPUT

PS C:\Users\Lenovo\Favorites> gcc rearrange.c -o rearrange
PS C:\Users\Lenovo\Favorites> ./rearrange.exe             
Enter n:5 
Enter values of list: 20 56 25 90 87
Rearranged values of list: 87 56 90 25 20 
PS C:\Users\Lenovo\Favorites> 

PS C:\Users\Lenovo\Favorites> gcc rearrange.c -o rearrange
PS C:\Users\Lenovo\Favorites> ./rearrange.exe             
Enter n: 4
Enter values of list: 50 50 50 50
Rearranged values of list: 50 50 50 50 
PS C:\Users\Lenovo\Favorites> 



