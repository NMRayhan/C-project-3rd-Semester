#include<stdio.h>
#include<string.h>
///this variable only for Customer details
char details[10][200]= {"Customer_name","Customer_Nationality","Customer_Gender","Customer_Room_type","Customer_Room_number","Customer_Phone_number"};
char deleted_customer_name[20],search_customer_name[10][20];
char customer_charecter_details[10][20];
int customer_intreger_details[10];
///this variable are looping system
int count,count1,count2;

int agre;
void customer_site()
{
    printf("\t\tThank you For Shopping\n");
    _getch();
    menu();
}
void manager()
{
    printf("\t\t 1.Add product\n");
    printf("\t\t 2.Display Product\n");
    printf("\n\n\t\t Enter your choice\n");
    _getch();
    restaurant();
}
void restaurant()
{
    printf("\t\t 1.Are You Manager\n");
    printf("\t\t 2.Are You Customer\n");
    printf("\t\t 3.back\n");
    printf("\n\n\t\t Enter Your Choice____");
    scanf("%d",&agre);
    switch(agre)
    {
    case 1:
        manager();
        break;
    case 2:
        customer_site();
        break;
    default:
        menu();
    }
}
void view_customer_record()
{
    int customer_number;
    printf("\t\tHow Many Customer Now In your Hotel____");
    scanf("%d",&customer_number);
    for(count=0; count<customer_number; count++)
    {
        for(count1=0; count1<4; count1++)
        {
            printf("Enter %s ___\n",details[count1]);
        }
        for(count2=4; count2<6; count2++)
        {
            printf("Enter %s___\n",details[count2]);
        }
    }
    printf("\n\n\t\t Press Any Key To Continue____");
    _getch();
    menu();
}
void searching()
{
    int customer_number;
    printf("\t\tHow Many Customer Now In your Hotel____\n");
    scanf("%d",&customer_number);
    printf("\t\t Please enter Name Which persona you want to find_____\n");
    scanf("%s",deleted_customer_name);
    for(count=0; count<customer_number; count++)
    {
        if(deleted_customer_name==customer_charecter_details[count])
        {
            printf("\t\t\t\tCustomer Name___%s\n",customer_charecter_details[count]);
            printf("\t\t\t\tCustomer Gender___%s\n",customer_charecter_details[count]);
            printf("\t\t\t\tCustomer Nationality__%s\n",customer_charecter_details[count]);
            printf("\t\t\t\tCustomer Room Number___%d\n",customer_intreger_details[count]);
        }
        else
        {
            printf("\t\tNo Record Found\n");
        }
    }
    printf("\n\n\t\tPress Any Key to continue___");
    _getch();
    menu();
}
void deletion()
{
    int customer_number;
    printf("\t\tHow Many Customer Now In your Hotel____");
    scanf("%d",&customer_number);
    printf("\t\t Please enter Name Which persona Data Delete_____");
    scanf("%s",deleted_customer_name);
    for(count=0; count<customer_number; count++)
    {
        if(deleted_customer_name==customer_charecter_details[count])
        {
            printf("\t\t\tCustomer Name___%s/n",customer_charecter_details[count]);
            printf("\t\t\tCustomer Gender___%s/n",customer_charecter_details[count]);
            printf("\t\t\tCustomer Nationality__%s/n",customer_charecter_details[count]);
            printf("\t\t\tCustomer Room Number___%s\n",customer_intreger_details[count]);
        }
    }
    printf("\t\tPlease Waite..................\n");
    _getch();
    printf("\t\tCustomer Name Details Was Deleted\n");
    _getch();
    main();
}
void single()
{
    printf("*****************______our room service are______*****************\n");
    printf(">>>>Our single rooms are small but very cozy with an area between 11-14 sqm\n");
    printf("\t\t1.One Single Bed and other are include\n");
    printf("\t\t2.Refrigerator\n");
    printf("\t\t3.Air Condition System\n");
    printf("\t\t4.One Single Desk with Chair\n");
    printf("\t\t5.Cloth Stand\n");
    printf("\t\t\t\t Cost:- Per Night 4000.00TK\n\n\n");
    printf("\t\t are You Agree with us press 1 for booking_____");
    scanf("%d",&agre);
    switch(agre)
    {
    case 1:
        booking();
        break;
    default:
        menu();
    }
}
void Double_bed()
{
    printf("*****************______our room service are______*****************\n");
    printf("\t\t1.Double Room Will Generally 1 Bed for Two Persons\n");
    printf("\t\t2.Queen or King Size Bed\n");
    printf("\t\t3.Refrigerator\n");
    printf("\t\t4.Air Condition System\n");
    printf("\t\t5.One Single Desk with Chair\n");
    printf("\t\t6.Cloth Stand\n");
    printf("\t\t\t\t Cost:- Per Night 6000.00TK\n\n\n");
    printf("\t\t are You Agree with us press 1 For Booking____");
    scanf("%d",&agre);
    switch(agre)
    {
    case 1:
        booking();
        break;
    default:
        menu();
    }
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
    printf("\t\t are You Agree with us press 1 for Booking_____");
    scanf("%d",&agre);
    switch(agre)
    {
    case 1:
        booking();
        break;
    default:
        category();
    }
}
void category()
{
    int choice_category;
    printf("\t\t 1.Sweet\n");
    printf("\t\t 2.Double\n");
    printf("\t\t 3.Single\n");
    printf("\t\t 4.Back\n");
    printf("\n\n\t\t Enter Your Choice___");
    scanf("%d",&choice_category);
    switch(choice_category)
    {
    case 1:
        Sweet();
        break;
    case 2:
        Double_bed();
        break;
    case 3:
        single();
        break;
    case 4:
        menu();
        break;
    default:
        menu();
    }
}
void booking()
{

    int again;
    for(count1=0; count1<4; count1++)
    {
        printf("Enter %s ___\n",details[count1]);
        scanf("%s",customer_charecter_details[count1]);
    }
    for(count2=4; count2<6; count2++)
    {
        printf("Enter %s___\n",details[count2]);
        scanf("%d",&customer_intreger_details[count2]);
    }
    printf("\n\n\t\t if You want to continue again\n");
    scanf("%d",&again);
    switch(again)
    {
    case 1:
        booking();
        break;
    default:
        menu();
    }
}
void menu()
{
    int option;
    printf("\t\t 1.Booking System\n");
    printf("\t\t 2.Category\n");
    printf("\t\t 3.Deletion\n");
    printf("\t\t 4.Searching\n");
    printf("\t\t 5.View Customer Details\n");
    printf("\t\t 6.Restaurant Service\n");
    printf("\t\t 7.Exit\n");
    printf("\n\n\t\tSelect Your Option in this Menu_______\n");
    scanf("%d",&option);
    switch(option)
    {
    case 1:
        booking();
        break;
    case 2:
        category();
        break;
    case 3:
        deletion();
        break;
    case 4:
        searching();
        break;
    case 5:
        view_customer_record();
        break;
    case 6:
        restaurant();
        break;
    default:
        exit(0);
    }
}

int main()
{
    printf("\t\t======================================\n");
    printf("\t\t  WELCOME TO HOTEL MANAGEMENT SYSTEM  \n");
    printf("\t\t======================================\n");
    printf("\t\t\n\nPress any Key to continue_____\n");
    _getch();
    system("cls");
    menu();
}

