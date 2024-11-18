int a[10],i,n,in,pos;
print("Enter the limit");
scanf("%d",&n);
printf("enter the numbers:");
for(i=0;i<n;i++);
scanf("%d",&a[i]);
printf("enter the elements to be deleted");
scanf("%d",&in);
printf("enter the position to be placed");
scanf("%d",&pos);
for(i=n;i.=pos;i--)
{
  a[i]=a[i-1];
 }
a[pos-1]=in;
for(i=0,i<n+1;i++)
printf("%d\n",a[i]);
}

