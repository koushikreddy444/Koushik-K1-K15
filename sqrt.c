#include<stdio.h>
#include<math.h>

int main()
{
  float a,b,c,desc,root1,root2,realpart,imgpart;

  printf("Enter the values of a,b,c:");
  scanf("%f%f%f",&a,&b,&c);

  if(a==0)
  {
    printf("Coefficient of a cannot be zero,\n");
    printf("Please try again.\n");
    return 1;
  }
  
  desc=(b*b)-(4*a*c);

  if(desc==0)
  {
    printf("Roots are Real and Equal\n ");
    root1=root2=(-b)/(2.0*a);
    printf("The roots are root1 = root2 = %f\n",root1);
  }
  
  else if(desc>0)
  {
    printf("Roots are real and Distinct\n");
    root1=(-b+sqrt(desc))/(2.0*a);
    root2=(-b-sqrt(desc))/(2.0*a);
    printf("The roots are:");
    printf("Root1=%f\n",root1);
    printf("Root2=%f\n",root2);
  }

  else
  {
    printf("The roots are imaginary\n");
    realpart=(-b)/(2.0*a);
    imgpart=sqrt(-desc)/(2.0*a);
    printf("The roots are:\n");
    printf("Root1=%f + i %f\n",realpart,imgpart);
    printf("Root2=%f - i %f\n",realpart,imgpart);
  } 
  
  return 0;
  
}