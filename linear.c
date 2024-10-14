#include<stdio.h>
int linearsearch(int arr[],int n,int key)
{
 int i;
 for(i==0;i<n;i++)
 {
  if(arr[i]==key)
  {
   return i;
   }
  }
  return -1;
  }
  int main()
  {
   int arr[]={2,3,4,10,40};
   int n = sizeof(arr);
   int key=10;
   int index=linearsearch(arr,n,key);
   if(index==-1)
   {
    printf("Value Not Found ");
    }
    else
    {
     printf("Value Found At Index %d",index);
     }
      return 0;
     }
   
