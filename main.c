
#include<stdio.h>

#include<string.h>
#include<stdlib.h>
#define rw 80
#define cl 50
struct ad;
int main();
char 

    char [name&#91] , 30];
    char disease&#91;30];
    int cabin,phone,age;x&#91;100];

int n,i,j=0,a=0,sum=0,g,flag,num;
void read();
void add();
void view();
void search();
void edit();
void del();
void show();

int main()
{
    read();
    int c,i,q;
    printf("Simple Hospital Management System\n");
    int m,n;
//making out the pattern
    
    for(m=1; m&lt;=4; m++)
    {
        for(n=1; n&lt;=5; n++)
            printf(" ");
        for(n=1; n&lt;=m-1; n++)
        {
            printf(" ");
        }
        for(n=1; n&lt;=4-m+1; n++)
        {
            if(n==4-m+1 || m==1 || m==4)
                printf("*");
            else
                printf(" ");
        }
        for(n=1; n&lt;=4-m+1; n++)
        {
            if(n==1 ||m==1 || m==4)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    while(c!=6)
    {

        printf("**Enter your choice**\n\n1. Add Information\n2. View Information\n3. Search\n4. Edit Information\n5. Delete Information\n6. Exit\n\nOption=");
        scanf("%d",&amp;c);//choice for option
        fflush(stdin);//making it clear
        if(c==1)//add
        {
            system("cls");
            add();
        }
        else if(c==2)//view
        {
            system("cls");
            view();
        }
        else if(c==3)//search
        {
            system("cls");
            search();
        }
        else if(c==4)//edit
        {
            system("cls");
            edit();
        }
        else if(c==5)//delete
        {
            system("cls");
            del();
        }
        else if(c==6)
        {
            write();
            return 0;
        }
        else
        {
            system("cls");
            printf("\n\nInvalid input , try again by us#include<stdio.h>

#include<string.h>
#include<stdlib.h>
#define rw 80
#define cl 50
struct ad;
int main();
char 

    char [name&#91] , 30];
    char disease&#91;30];
    int cabin,phone,age;x&#91;100];

int n,i,j=0,a=0,sum=0,g,flag,num;
void read();
void add();
void view();
void search();
void edit();
void del();
void show();

int main()
{
    read();
    int c,i,q;
    printf("Simple Hospital Management System\n");
    int m,n;
//making out the pattern
    
    for(m=1; m&lt;=4; m++)
    {
        for(n=1; n&lt;=5; n++)
            printf(" ");
        for(n=1; n&lt;=m-1; n++)
        {
            printf(" ");
        }
        for(n=1; n&lt;=4-m+1; n++)
        {
            if(n==4-m+1 || m==1 || m==4)
                printf("*");
            else
                printf(" ");
        }
        for(n=1; n&lt;=4-m+1; n++)
        {
            if(n==1 ||m==1 || m==4)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    while(c!=6)
    {

        printf("**Enter your choice**\n\n1. Add Information\n2. View Information\n3. Search\n4. Edit Information\n5. Delete Information\n6. Exit\n\nOption=");
        scanf("%d",&amp;c);//choice for option
        fflush(stdin);//making it clear
        if(c==1)//add
        {
            system("cls");
            add();
        }
        else if(c==2)//view
        {
            system("cls");
            view();
        }
        else if(c==3)//search
        {
            system("cls");
            search();
        }
        else if(c==4)//edit
        {
            system("cls");
            edit();
        }
        else if(c==5)//delete
        {
            system("cls");
            del();
        }
        else if(c==6)
        {
            write();
            return 0;
        }
        else
        {
            system("cls");
            printf("\n\nInvalid input , try again by using valid inputs");
        }
        printf("\n\n");
    }
}
ing valid inputs");
        }
        printf("\n\n");
    }
}

void add()
{
    printf("\n\n");
    printf("Already data inputed on the database =%d\n\n",num);//how many inputs
    printf("How many entry do you want to add=\n");
    scanf("%d",&amp;n);
    sum=n+num;

    for(i=num,j=0; i&lt;sum; i++)
    {
        printf("\n");
        fflush(stdin);
        printf("Enter patient's Name = ");
        gets name;
        fflush(stdin);
        printf("Enter disease = ");
        gets(x&#91;i].disease);
        fflush(stdin);
        printf("Enter the age = ");
        scanf("%d",&amp;x&#91;i].age);
        fflush(stdin);
        printf("Enter cabin no = ");
        scanf("%d",&amp;x&#91;i].cabin);
        fflush(stdin);
        printf("Enter phone number = ");
        scanf("%d",&amp;x&#91;i].phone);
        fflush(stdin);
        printf("\n");
        j++;
        a++;
        num++;
    }
}

void view()
{
    for(i=0; i&lt;num; i++)
    {
        printf("\n");
        printf("Serial Number=%d\n",i);
        printf("Name = ");
        puts(x&#91;i].name);
        printf("Disease = ");
        puts(x&#91;i].disease);
        printf("Cabin no = %d\nPhone number = 0%d\nAge=%d",x&#91;i].cabin,x&#91;i].phone,x&#91;i].age);
        printf("\n\n");
    }
}

void edit()
{
    int q,p;
    fflush(stdin);
    printf("What do you want to edit ?\n");
    printf("Enter your option\n");
    printf("1.Name\n2.Disease\n3.Age\n4.Cabin\n5.Phone no.\n");
    printf("Option=");
    scanf("%d",&amp;q);//option
    if(q&lt;=5)
    {
        printf("Enter the serial no of that patient= (0 - %d)=",num-1);
        scanf("%d",&amp;p);//serial number
        if(p&lt;num)
        {
            if(q==1)
            {
                fflush(stdin);
                printf("Enter the new name=");
                gets(x&#91;p].name);

            }
            else if(q==2)
            {
                fflush(stdin);
                printf("Enter the new Disease=");
                gets(x&#91;p].disease);
            }
            else if(q==3)
            {
                fflush(stdin);
                printf("Enter the new Age=");
                scanf("%d",&amp;x&#91;p].age);
            }

            else if(q==4)
            {
                fflush(stdin);
                printf("Enter the new Cabin no=");
                scanf("%d",&amp;x&#91;p].cabin);
            }

            else if(q==5)
            {
                fflush(stdin);
                printf("Enter the new Phone no =");
                scanf("%d",&amp;x&#91;p].phone);
            }
        }
        else
        {
            printf("\n\nInvalid Serial \nTry Again !!\n\n");
        }
    }
    else
    {
        printf("\n\nInvalid option\nTry Again!!\n\n");
    }
}

void search()
{
    int s,h,f;
    char u&#91;100];
    printf("By what do you want to search ?\n");
    printf("1.Serial no.\n2.Name\n3.Disease\n4.Cabin no.\n5.Phone no.\n6.Age\n\nOption = ");
    scanf("%d",&amp;h);
    if(h==1)
    {
        printf("Enter Serial number of the patient=");
        scanf("%d",&amp;s);
        if(s&lt;num)
        {
            printf("\n");
            printf("Serial Number=%d\n",s);
            printf("Name = ");
            puts(x&#91;s].name);
            printf("Disease = ");
            puts(x&#91;s].disease);
            printf("Cabin no = %d\nPhone number = 0%d\nAge = %d",x&#91;s].cabin,x&#91;s].phone,x&#91;s].age);
            printf("\n\n");
        }
        else
            printf("\n\nNot Found\n\n");
    }
    else if(h==2)//problem is here.........
    {
        int f=1;
        fflush(stdin);
        printf("Enter your name=");
        gets(u);
        fflush(stdin);
        for(g=0; g&lt;num; g++)
        {
            if(strcmp(u,x&#91;g].name)==0)
            {
                printf("\n");
                printf("Serial Number=%d\n",g);
                printf("Name = ");
                puts(x&#91;g].name);
                printf("Disease = ");
                puts(x&#91;g].disease);
                printf("Cabin no = %d\nPhone number = 0%d\nAge = %d",x&#91;g].cabin,x&#91;g].phone,x&#91;g].age);
                printf("\n\n");
                f=0;

            }
        }
        if(f==1)
            printf("\nNot Found\n");



    }
    else if(h==3)
    {
        int f=1;
        fflush(stdin);
        printf("Enter Disease = ");
        gets(u);
        fflush(stdin);
        for(g=0; g&lt;num; g++)
        {
            if(strcmp(u,x&#91;g].disease)==0)
            {
                printf("\n");
                printf("Serial Number=%d\n",g);
                printf("Name = ");
                puts(x&#91;g].name);
                printf("Disease = ");
                puts(x&#91;g].disease);
                printf("Cabin no = %d\nPhone number = 0%d\nAge = %d",x&#91;g].cabin,x&#91;g].phone,x&#91;g].age);
                printf("\n\n");
                f=0;
            }


        }
        if(f==1)
            printf("\nNot Found\n");


    }
    else if(h==4)
    {
        int f=1;
        printf("Enter Cabin number = ");
        scanf("%d",&amp;f);
        for(g=0; g&lt;num; g++)
        {
            if(f==x&#91;g].cabin)
            {
                printf("\n");
                printf("Serial Number=%d\n",g);
                printf("Name = ");
                puts(x&#91;g].name);
                printf("Disease = ");
                puts(x&#91;g].disease);
                printf("Cabin no = %d\nPhone number = 0%d\nAge = %d",x&#91;g].cabin,x&#91;g].phone,x&#91;g].age);
                printf("\n\n");
                f=0;
            }

        }
        if(f==1)
            printf("Not Found\n\n");

    }
    else if(h==5)
    {
        int f=1;
        printf("Enter Phone number = ");
        scanf("%d",&amp;f);
        for(g=0; g&lt;num; g++)
        {
            if(f==x&#91;g].phone)
            {
                printf("\n");
                printf("Serial Number=%d\n",g);
                printf("Name = ");
                puts(x&#91;g].name);
                printf("Disease = ");
                puts(x&#91;g].disease);
                printf("Cabin no = %d\nPhone number = 0%d\nAge = %d",x&#91;g].cabin,x&#91;g].phone,x&#91;g].age);
                printf("\n\n");
                f=0;
            }

        }
        if(f==1)
            printf("Not Found");
    }
    else if(h==6)
    {
        int f=1;
        printf("Enter Age = ");
        scanf("%d",&amp;f);
        for(g=0; g&lt;num; g++)
        {
            if(f==x&#91;g].age)
            {
                printf("\n");
                printf("Serial Number=%d\n",g);
                printf("Name = ");
                puts(x&#91;g].name);
                printf("Disease = ");
                puts(x&#91;g].disease);
                printf("Cabin no = %d\nPhone number = 0%d\nAge = %d",x&#91;g].cabin,x&#91;g].phone,x&#91;g].age);
                printf("\n\n");
                f=0;
            }

        }
        if(f==1)
            printf("Not Found\n\n");

    }
    else
        printf("\n\nInvalid input\n\n");




}

void del()
{
    int f,h;
    printf("Enter the serial number of the patient that you want to delete=");
    scanf("%d",&amp;f);
    if(f&lt;num)
    {
        printf("What do you want ?\n");
        printf("1.Remove the whole record\n2.Remove Name\n3.Remove Disease\n4.Remove age\n5.Remove Cabin\n6.Remove phone number\nOption = ");
        scanf("%d",&amp;h);
        if(h==1)
        {
            while(f&lt;num)
            {
                strcpy(x&#91;f].name,x&#91;f+1].name);
                strcpy(x&#91;f].disease,x&#91;f+1].disease);
                x&#91;f].age=x&#91;f+1].age;
                x&#91;f].cabin=x&#91;f+1].cabin;
                x&#91;f].phone=x&#91;f+1].phone;
                f++;
            }
            num--;
        }
        else if(h==2)
        {
            strcpy(x&#91;f].name,"Cleared");

        }
        else if(h==3)
        {
            strcpy(x&#91;f].disease,"Cleared");
        }
        else if(h==4)
        {
            x&#91;f].age=0;
        }
        else if(h==5)
        {
            x&#91;f].cabin=0;
        }
        else if(h==6)
        {
            x&#91;f].phone=0;
        }

    }
    else
        printf("\n\nInvalid Serial number\n");

}

void read()
{
    FILE *fp = fopen("patient.txt","r");
    if(fp == NULL)
    {
        //create empty file, so that we can open it
        //in the next execution of this program
        fp = fopen("patient.txt","w");
        fclose(fp);
        printf("File does not exist, I JUST CREATED IT, exiting...\n\n\n");
        return 0;
    }

    num = fread(x, sizeof(struct ad),100, fp);
    fclose(fp);
}

void write()
{
    FILE *fp = fopen("patient.txt","w");
    if(fp == NULL)
    {
        printf("Error");
        exit(1);
    }
    fwrite(x, sizeof(struct ad),num, fp);

    fclose(fp);
}


