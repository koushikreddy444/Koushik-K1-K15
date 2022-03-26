
// simulation of simple calculator
#include<stdio.h>
int main()
{
  int a,b;
  float result;
  char op;
  printf("enter values of a and b:");
  scanf("%d%d",&a,&b);
  printf("enter opertor:");
  scanf(" %c",&op);
  if(op=='+')
  {
    result=a+b;
    printf("sum of two no=%f\n",result);
  }
  else if(op=='-')
  {
    result=a-b;
    printf("%d-%d=%f\n",a,b,result);
  }
  else if(op=='*')
  {
    result=a*b;
    printf("product=%f\n",result);
  }
  else if(op=='/')
  {
    if(b==0)
    {
      printf("division not possible\n");
      return 1;
    }
    else
    {
      result=a/b;
      printf("after division quotient=%f\n",result);
      return 1;
    }
  }
    else if(op=='%')
    {
          if(b==0)
        {
      printf("division not possible\n");
      return 1;
    }
      else
      {
        result=a%b;
        printf("reminder=%f\n",result);
      }
    }
      else
      {
        printf("its a invalid opertor\n");
      }
      return 0;
  }









