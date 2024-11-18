#include<stdio.h>
void main()
{
 int a[10],i,n,pos;
 printf("enter the limit:");
 scanf("%d",&n);
 printf("enter the array elements:\n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
  }
 printf("\n given Array is:");
 for(i=0;i<n;i++)
  {
   printf("%d",a[i]);
  }
 printf("Enter the position to be deleted:\n");
 scanf("%d",&pos);
 for(i=pos-1;i<n;i++)
 {
  a[i]=a[i+1];
  }
 printf("\n converted array:\n");
 for(i=0;i<n-1;i++)
 {
 printf("%d",a[i]);
 }
 }
