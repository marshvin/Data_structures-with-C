//program to search position of an element
#include<stdio.h>
int main()
{int item,look,n,i;
n=5;
int arr[5]={1,2,3,4,5};
printf("\n enter the item to be searched");
scanf("%d",&item);
for(i=0;i<6;i++)
{if(arr[i]==item)
{look=i+1;
break;
}
else
look=0;
}
if(look!=0)
{printf("\n found at location %d\n",look);
}
else
{printf("\n Item not found\n");
}
}
