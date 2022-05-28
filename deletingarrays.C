//progam for deletion of element in arrays
#include <stdio.h>
int main()
{int i,pos,arr[100],n;
printf("Enter the size of the array\n");
scanf("%d",&n);

printf("Enter elements of array:");
for(i=0;i<n;i++)
{scanf("%d",&arr[i]);
}
printf("Enter position of deletion:");
{scanf("%d",&pos);
}
if (pos>=n+1)
printf("Deletion not possible\n");
else
{ for ( i= pos-1;i<n-1;i++)
arr[i]=arr[i+1];


printf("Array after deleting elements\n");
for(i=0;i<n-1;i++)
{printf("%d\n",arr[i]);
}
return 0;
}
}
