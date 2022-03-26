//electricity bill generator
#include<stdio.h>

int main()
{
  float unit,charge,totalAmount,surCharge;
  char name[20];

  printf("enter the name of coustmer:");
  fgets(name,20,stdin);

 printf("enter the number of units used:");
 scanf("%f",&unit);
 
 charge=0;
 if(unit>=1&&unit<= 200)
    {
        charge = unit * 0.80;
    }
    else if(unit > 200&&unit<=300)
    {
        charge = (0.8*200)+(0.9*(unit-200));
    }
    else if(unit >300)
    {
       charge =  (0.8*200)+(0.9*100)+(1*(unit-300));
    }
    totalAmount=charge+100;
    
    if(totalAmount>400)
    {
    	totalAmount=totalAmount+ totalAmount* 0.15;
    }
    
   
    printf("\n\nELECTRICITY BILL\n\n");
    printf("name:%s\n",name);
    printf("no of units:%.2f",unit);

    printf("Bill = Rs. %.2f", totalAmount);


    return 0;
}
