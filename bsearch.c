#include<stdio.h>
void main()
{
  int i,left=0,right,middle,n,s,a[100];
  printf("enter the number of elements:\n");
   scanf("%d",&n);
  printf("Enter Elements :\n");
  for(i=0;i<n;i++)
  {
   scanf("%d",&a[i]);
   }
    printf("Enter the value to Search:\n");
    scanf("%d",&s);
    left=0;
    right=n-1;
   
    while(left<=right)
    {
     middle=(left+right)/2;
     if(a[middle]==s)
     {
       printf("The element is found at position %d\n",middle);
       break;
     }
      else if(a[middle]>s)
      right=middle-1;
      else
      left=middle+1;
      }
      if(left>right)
      printf("element not found in the list\n");
      }
    
    
    
   
