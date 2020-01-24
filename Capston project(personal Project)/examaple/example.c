#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char username[20];
char password[10];
FILE *C_details,*shop,*memo;

struct customer
{
    char name[20];
    char gender[10];
    char nationality[10];
    char room_category[10];
    int room_number;
    int phone_number;
} visitor1;

struct customerShop
{
    char food[20];
    int prize;
} cs1;

int a,c,h_customer,name,opt;
char h_name[20],pn[20];
int pq,sum;

void cus()
{
    shop=fopen("shop_service.txt","r");
    while(fscanf(shop,"%s\t\t%d\n",cs1.food,&cs1.prize)!=EOF)
    {
        printf("%s\t\t%d\n",cs1.food,cs1.prize);
    }
    fclose(shop);

    while(1)
    {
        printf("Submit Your Product Name:-\n");
        scanf("%s",pn);
        printf("Enter Product Quantity:-\n");
        scanf("%d",pq);
        while(pn!=0)
        {
            shop=fopen("shop_service.txt","r+");
            while(fscanf(shop,"%s\t\t%d\n",cs1.food,&cs1.prize)!=EOF)
            {
                if(pn==cs1.food)
                {
                    sum=sum+(cs1.prize*pq);
                    printf("you can pay %d TAKA\n",sum);
                }
            }
            fclose(shop);
        }
        printf("Do you want to again Shopping press 1 otherwise 2\n");
        scanf("%d",&opt);
        if(opt==1)
        {
            system("cls");
            cus();
        }
        else
        {
            system("cls");
            menu();
        }
    }
}

void manager()
{
    shop=fopen("shop_service.txt","a+");
    if(shop==NULL)
    {
        printf("File Create Successfully\n");
        exit(1);
    }
    printf("Please Enter Food Name and Prize:-\n");
    scanf("%s",cs1.food);
    scanf("%d",&cs1.prize);
    fprintf(shop,"%s\t\t%d\n",cs1.food,cs1.prize);
    fclose(shop);
    system("cls");
    printf("add more press 1 otherwise Enter\n");
    scanf("%d",&c);
    if(c==1)
    {
        system("cls");
        manager();
    }
    else
    {
        system("cls");
        menu();
    }
}

void restaurant()
{
    printf("\t\t\t1.Are you Manager\n");
    printf("\t\t\t2.Are you Customer\n");
    printf("\t\t\t3.Back\n");
    printf("please Select Your Option\n");
    scanf("%d",&a);
    system("cls");
    if(a==1)
    {
        manager();
    }
    else if(a==2)
    {
        cus();
    }
    else
    {
        menu();
    }
}
void searching()
{
    printf("What is your customer name..\n");
    scanf("%s",h_name);
    C_details=fopen("Customer_Details.txt","a+");
    while(fscanf(C_details,"%s\t%s\t%\t%s\t%d\t%d\n",visitor1.name,visitor1.gender,visitor1.nationality,visitor1.room_category,&visitor1.room_number,&visitor1.phone_number)!= EOF)
    {
        if(strcmp(h_name,visitor1.name)==0)
        {
            printf("Name..%s\t",visitor1.name);
            printf("Gander..%s\t",visitor1.gender);
            printf("Nationality..%s\t",visitor1.nationality);
            printf("Room Category..%s\t",visitor1.room_category);
            printf("Room Number..%d\t",visitor1.room_number);
            printf("phone Number..%d\n",visitor1.phone_number);
        }
    }
    fclose(C_details);
    _getch();
    system("cls");
    menu();
}
void Sweet()
{

    printf("*****************______our room service are______*****************\n");
    printf("\n");
    printf("\t\t1.Sweet Room Will Generally few Bed for in Different Room in Float\n");
    printf("\t\t2.A single room with a king/queen/full/twin bed(s)\n");
    printf("\t\t3.Refrigerator\n");
    printf("\t\t4.Air Condition System\n");
    printf("\t\t5.One Single Desk with Chair\n");
    printf("\t\t6.Cloth Stand\n");
    printf("\t\t7.TV\n");
    printf("\t\t8.A Sofa\n");
    printf("\t\t9.A suite however is a much larger accommodation.\n");
    printf("\t\t\t\t Cost:- Per Night 10,000.00TK\n\n\n");
    printf("\t\t are You Agree with us press 1\n");
    scanf("%d",&a);
    if(a==1)
    {
        system("cls");
        booking();
    }
    else
    {
        system("cls");
        menu();
    }
}
void Double_bed()
{
    printf("*****************______our room service are______*****************\n");
    printf("\n");
    printf("\t\t1.Double Room Will Generally 1 Bed for Two Persons\n");
    printf("\t\t2.Queen or King Size Bed\n");
    printf("\t\t3.Refrigerator\n");
    printf("\t\t4.Air Condition System\n");
    printf("\t\t5.One Single Desk with Chair\n");
    printf("\t\t6.Cloth Stand\n");
    printf("\t\t\t\t Cost:- Per Night 6000.00TK\n\n\n");
    printf("\t\t are You Agree with us press 1\n");
    scanf("%d",&a);
    if(a==1)
    {
        system("cls");
        booking();
    }
    else
    {
        system("cls");
        menu();
    }
}
void single()
{
    printf("*****************______our room service are______*****************\n");
    printf("\n");
    printf(">>>>Our single rooms are small but very cozy with an area between 11-14 sqm\n");
    printf("\t\t1.One Single Bed and other are include\n");
    printf("\t\t2.Refrigerator\n");
    printf("\t\t3.Air Condition System\n");
    printf("\t\t4.One Single Desk with Chair\n");
    printf("\t\t5.Cloth Stand\n");
    printf("\t\t\t\t Cost:- Per Night 4000.00TK\n\n\n");
    printf("\t\t are You Agree with us press 1\n");
    scanf("%d",&a);
    if(a==1)
    {
        system("cls");
        booking();
    }
    else
    {
        system("cls");
        menu();
    }
}
void view_customer_record()
{
    C_details=fopen("Customer_Details.txt","r");
    while(fscanf(C_details,"%s\t%s\t%s\t%s\t%d\t%d\n",visitor1.name,visitor1.gender,visitor1.nationality,visitor1.room_category,&visitor1.room_number,&visitor1.phone_number)!= EOF)
    {
        printf("%s\t",visitor1.name);
        printf("%s\t",visitor1.gender);
        printf("%s\t",visitor1.nationality);
        printf("%s\t",visitor1.room_category);
        printf("%d\t",visitor1.room_number);
        printf("%d\n",visitor1.phone_number);
    }
    fclose(C_details);
    _getch();
    system("cls");
    menu();
}
FILE *fp;
void deletion()
{
    fp=fopen("Deleted_customer.txt","a+");
    if(fp==NULL)
    {
        printf("File Don't create successfully\n");
        exit(1);
    }
    printf("Enter Name Which Person checkout....\n");
    scanf("%s",h_name);
    C_details=fopen("Customer_Details.txt","r");
    while(fscanf(C_details,"%s\t%s\t%s\t%s\t%d\t%d\n",visitor1.name,visitor1.gender,visitor1.nationality,visitor1.room_category,&visitor1.room_number,&visitor1.phone_number)!=EOF)
    {
        if(strcmp(h_name,visitor1.name)==1)
        {
            while(fprintf(fp,"%s\t%s\t%s\t%s\t%d\t%d\n",visitor1.name,visitor1.gender,visitor1.nationality,visitor1.room_category,visitor1.room_number,visitor1.phone_number)!=EOF)
            {
                while(fscanf(fp,"%s\t%s\t%s\t%s\t%d\t%d\n",visitor1.name,visitor1.gender,visitor1.nationality,visitor1.room_category,visitor1.room_number,visitor1.phone_number)!=EOF)
                {
                    printf("%s\t",visitor1.name);
                    printf("%s\t",visitor1.gender);
                    printf("%s\t",visitor1.nationality);
                    printf("%s\t",visitor1.room_category);
                    printf("%d\t",visitor1.room_number);
                    printf("%d\n",visitor1.phone_number);
                }
                fclose(fp);
            }
            fclose(C_details);
        }
    }
    _getch();
    system("cls");
    menu();
}


void category()
{
    int room;
    printf("We Service Our 3 System Room Service...\n");
    printf("\t\t1.Single\n");
    printf("\t\t2.Double\n");
    printf("\t\t3.Sweet\n");
    printf("\t\t4.Exit\n");
    printf("if you Return Main Menu...press any key\n");
    printf("Choice your Category..\n");
    scanf("%d",&room);
    system("cls");
    if(room==1)
    {
        single();
    }
    else if(room==2)
    {
        Double_bed();
    }
    else if(room==3)
    {
        Sweet();
    }
    else
    {
        menu();
    }
}
int restaurant_help;
void booking()
{
    C_details=fopen("Customer_Details.txt","a+");
    if(C_details==NULL)
    {
        printf("File Don't create successfully\n");
        exit(1);
    }
    fflush(stdin);
    printf("Enter Customer Name..\n");
    scanf("%s",visitor1.name);
    fprintf(C_details,"%s\t",visitor1.name);
    fflush(stdin);
    printf("Enter Customer Gender..\n");
    scanf("%s",visitor1.gender);
    fprintf(C_details,"%s\t",visitor1.gender);
    fflush(stdin);
    printf("Enter Customer Nationality..\n");
    scanf("%s",visitor1.nationality);
    fprintf(C_details,"%s\t",visitor1.nationality);
    fflush(stdin);
    printf("Room category..\n");
    scanf("%s",visitor1.room_category);
    fprintf(C_details,"%s\t",visitor1.room_category);
    fflush(stdin);
    printf("Enter Booked Room Number..\n");
    scanf("%d",&visitor1.room_number);
    fprintf(C_details,"%d\t",visitor1.room_number);
    fflush(stdin);
    printf("Enter customer Phone Number..\n");
    scanf("%d",&visitor1.phone_number);
    fprintf(C_details,"%d\n",visitor1.phone_number);

    fclose(C_details);
    printf("Customer Record Saved Successfully....thank you\n\n\n");
    printf("Enter 2 for more booking\n");
    printf("Are You Have Need Restaurants Service press 1...otherwise 0\n");
    scanf("%d",&restaurant_help);
    system("cls");
    if(restaurant_help==1)
    {
        restaurant();
    }

    else if(restaurant_help==2)
    {
        booking();
    }
    else
    {
        menu();
    }
}
void option(int number)
{
    if(number==1)
    {
        booking();
    }
    else if(number==2)
    {
        category();
    }
    else if(number==3)
    {
        deletion();
    }
    else if(number==4)
    {
        searching();
    }
    else if(number==5)
    {
        view_customer_record();
    }
    else if(number==6)
    {
        restaurant();
    }
    else
    {
        return;
    }
}
void menu()
{
    system("color 0A");
    int number;
    printf("\t\t@==========================================================@\n");
    printf("\t\t|                   WELCOM TO OUR SYSTEM                   |\n");
    printf("\t\t|1.Booking                                                 |\n");
    printf("\t\t|2.Category                                                |\n");
    printf("\t\t|3.Deletion                                                |\n");
    printf("\t\t|4.Searching                                               |\n");
    printf("\t\t|5.View Customer Record                                    |\n");
    printf("\t\t|6.Restaurants Service                                     |\n");
    printf("\t\t|7.Exit                                                    |\n");
    printf("\t\t@==========================================================@\n");
    printf("\t\t\tSelection your Option...");
    scanf("%d",&number);
    system("cls");
    option(number);
}

void login()
{
    system("color 0A");
    printf("\t\t\t_______________SAFTY FIRST______________\n");
    printf("\t\t\t1.Please Enter Username\n");
    gets(username);

    printf("\t\t\t2.Please Enter password\n");
    gets(password);

    if(strcmp(username, "rayhan") == 0)
    {
        if(strcmp(password, "rayhan") == 0)
        {
            system("color 0B");
            printf("\t\t\tYou are Successfully Login.\n");
            _getch();
            system("cls");
            menu();
        }
        else
        {
            printf("\t\t\tWrong password.\n");
            _getch();
            system("cls");
            login();
        }
    }
    else
    {
        printf("\t\t\tyour usename is incorrect.\n");
        _getch();
        system("cls");
        login();
    }
}
int main()
{
    system("color 4");
    printf("           @@    @@       @@      @@@@@@@@@@ @@@@@@@@ @@                         \n");
    printf("           @@@  @@@    @@    @@      @@@@    @@       @@                         \n");
    printf("           @@@@@@@@   @@      @@      @@     @@@@@    @@                         \n");
    printf("           @@@@@@@@   @@      @@      @@     @@@@@    @@@                        \n");
    printf("           @@@  @@@    @@    @@       @@     @@       @@@@                       \n");
    printf("           @@    @@       @@          @@     @@@@@@@@ @@@@@@@@@@@                \n\n");
    printf("             @       @     @     @        @     @         @     @@@@@@@ @       @ @@@@@@@ @       @ @@@@@@@@@    \n");
    printf("             @ @   @ @   @   @   @  @     @   @   @     @   @   @       @ @   @ @ @       @ @     @     @        \n");
    printf("             @   @   @ @ @ @ @ @ @    @   @ @ @ @ @ @ @    @@   @@@@    @   @   @ @@@@    @   @   @     @        \n");
    printf("             @       @ @       @ @      @ @ @       @   @   @@@ @       @       @ @       @     @ @     @        \n");
    printf("             @       @ @       @ @        @ @       @     @   @ @@@@@@@ @       @ @@@@@@@ @       @     @        \n\n\n");
    printf("                            @@   @     @  @@@  @@@@@@@ @@@@@@@ @       @                 \n");
    printf("                           @      @   @  @        @    @       @ @   @ @                 \n");
    printf("                            @@@    @ @    @@@     @    @@@@    @   @   @                 \n");
    printf("                               @    @        @    @    @       @       @                 \n");
    printf("                            @@@     @     @@@     @    @@@@@@@ @       @                 \n\n");
    printf("****************NUR MOHAMMAD RAYHAN****************\n\n\n");
    printf("Press any key To Continue\n");
    _getch();
    system("cls");
    login();
}
