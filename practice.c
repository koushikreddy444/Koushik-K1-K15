#include <stdio.h>
int main()
{
  int a[20],n,i,j,k,temp,key,mid,last,first;
  printf("enter n");
  scanf("%d",&n);
  printf("enter the %d no of elements\n");
  for(i=0,)
}
printf("enter the value of key:\n");
scanf("%d",&key);
first=0;
last=n-1;
mid=(first+last)/2;
if(key!=a[mid])
{
  printf("the value is not present\n");
  return -1;
}
else if(key<a[mid])
{
  last=mid-1;
}
else(key>a[mid]);
  {
    first=mid+1;
  }
printf("the %d is found in the sorted order\n",key);
return 0;
}