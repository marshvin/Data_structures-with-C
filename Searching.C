//program to search an element

#include <stdio.h>
int main()
{ 
int i,n;
printf("enter position of element to search :");
scanf("%d",&n);
int arr[6]={1,2,3,4,5,6};
for(i=0;i<6;i++)
{

if(i==n-1)
{printf("Element is %d:",arr[i]);
break;
}
}
return 0;
}
