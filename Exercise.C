//Program to insert items into array
#include <stdio.h>
int main()
{int i,n,arr[50];
printf("Enter the size of the array\n");
scanf("%d",&n);

printf("Enter elements of array:");

for(i=0;i<n;i++)
{scanf("%d",&arr[i]);
}
//traversing of elements
printf("Array after inserting new elements\n");
for(i=0;i<n;i++)
{printf("Array[%d]=%d\n",i,arr[i]);
}

//updating of array
{printf("Update the array\n:");
arr[4]=789;
printf("Arrays after updating elements\n");
for(i=0;i<n;i++)
{printf("%d\n",arr[i]);
}
}
//searching for element
{
int a,k;
k=34;
for(i=0;i<n;i++)
{

if(i==k-1)
{printf("Element found is %d:",arr[i]);
break;
} }}
//deletion of item
{int pos;
pos=3;
for(i= pos-1;i<n-1;i++)
arr[i]=arr[i+1];


printf("Array after deleting new elements\n");
for(i=0;i<n-1;i++)
{printf("Array[%d]=%d\n",i,arr[i]);
}
}

return 0;
}



