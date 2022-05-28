//program to insert elements into an array using run time 
#include <stdio.h>
int main()
{int i,pos,n,arr[50],item;
printf("Enter the size of the array\n");
scanf("%d",&n);

printf("Enter elements of array:");
for(i=0;i<n;i++)
{scanf("%d",&arr[i]);
}
printf("Enter position of array:");
{scanf("%d",&pos);
}
printf("Enter item to be inserted:");
{scanf("%d,",&item);
}

for(i=n;i>=pos;i--)
{arr[i]=arr[i-1];
}
arr[pos-1]=item;

printf("Array after inserting new elements\n");
for(i=0;i<n;i++)
{printf("%d\n",arr[i]);
}
return 0;



}
