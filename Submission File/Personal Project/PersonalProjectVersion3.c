#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct product
{
    char food_name[20];
    int food_prize;
} product_shop;
struct customer
{
    char name[20];
    char nationality[20];
    char gender[10];
    char r_type[10];
    int r_number;
    int p_number;
} hotel_customer;
char deleted_customer_name[20],search_customer_name[20];
char agre;
void disply_product()
{
    printf("\t\t\tProduct name__%s\n",product_shop.food_name);
    printf("\t\t\tProduct Prize__%d\n",product_shop.food_prize);
    printf("\n\n");
    _getch();
    restaurant();
}
void add_product()
{
    printf("\t\tEnter Food name\n");
    scanf("%s",product_shop.food_name);
    printf("\t\tEnter Food Prize\n");
    scanf("%d",product_shop.food_prize);
    printf("\n\n\n\t\t\t\tIf You want Again Add press 1___");
    scanf("%d",&agre);
    if(agre==1)
    {
        add_product();
    }
    else
    {
        manager();
    }
}
void manager()
{
    printf("\t\t\t1.Add product\n");
    printf("\t\t\t2.Display Product\n");
    printf("\t\t\t3.Back\n");
    printf("\n\n\n\t\t\t\tEnter Your Choice____");
    scanf("%d",&agre);
    if(agre==1)
    {
        add_product();
    }
    else if(agre==2)
    {
        disply_product();
    }
    else
    {
        restaurant();
    }
}
void customer_site()
{
    char pn[20];
    int pq,sum;
    printf("\t\t\tProduct name__%s\n",product_shop.food_name);
    printf("\t\t\tProduct Prize__%d\n",product_shop.food_prize);
    printf("\n");
    printf("\n\n\t\t\t Enter Food Name and Quantity____");
    scanf("%s %d",pn,&pq);
    if(strcmp(pn,product_shop.food_name)==0)
    {
        sum=(product_shop.food_prize*pq);
        printf("\t\t\t\n\nYou Can Pay %d TAKA\n",sum);
    }
    _getch();
    menu();
}
void restaurant()
{
    printf("\t\t\t1.Are You Customer\n");
    printf("\t\t\t2.Are You Manager\n");
    printf("\t\t\t3.Back\n");
    printf("\n\n\n\t\t\t\tEnter Your Choice_____");
    scanf("%d",&agre);
    if(agre==1)
    {
        customer_site();
    }
    else if(agre==2)
    {
        manager();
    }
    else
    {
        menu();
    }
}
void view_customer_record()
{
    printf("\t\t\tCustomer Name___%s\n",hotel_customer.name);
    printf("\t\t\tCustomer Gender___%s\n",hotel_customer.gender);
    printf("\t\t\tCustomer Nationality___%s\n",hotel_customer.nationality);
    printf("\t\t\tCustomer Service Type___%s\n",hotel_customer.r_type);
    printf("\t\t\tBooked Room Number___%d\n",hotel_customer.r_number);
    printf("\t\t\tCustomer Phone Number___%d\n",hotel_customer.p_number);
    printf("\n\t\t");
    printf("\\n\n\t\t\t\tPress Enter to Continue____");
    _getch();
    menu();
}
void searching()
{
    printf("\t\t\t Enter Your Customer Name____");
    scanf("%s",search_customer_name);
    if(search_customer_name==hotel_customer.name)
    {
        printf("\t\t\tCustomer Name___%s\n",hotel_customer.name);
        printf("\t\t\tCustomer Gender___%s\n",hotel_customer.gender);
        printf("\t\t\tCustomer Nationality___%s\n",hotel_customer.nationality);
        printf("\t\t\tCustomer Service Type___%s\n",hotel_customer.r_type);
        printf("\t\t\tBooked Room Number___%d\n",hotel_customer.r_number);
        printf("\t\t\tCustomer Phone Number___%d\n",hotel_customer.p_number);
    }
    _getch();
    menu();
}
void deletion()
{
    printf("\t\t\tEnter Your Name____");
    scanf("%s",deleted_customer_name[20]);
    if(strcmp(deleted_customer_name,hotel_customer.name)==0)
    {
        printf("\t\t\t Customer name___%s\n",hotel_customer.name);
        printf("\t\t\t Customer Gender___%s\n",hotel_customer.gender);
        printf("\t\t\t Customer Nationality___%s\n",hotel_customer.nationality);
        printf("\t\t\t Customer Service Type___%s\n",hotel_customer.r_type);
        printf("\n\n\t\t\t This Customer Was Deleted\n");
    }
    _getch();
    menu();
}
void Sweet()
{
    printf("*****************______our room service are______*****************\n");
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
    printf("\n\n\t\t are You Agree with us press '1' for Booking_____");
    scanf("%d",&agre);
    if(agre==1)
    {
        booking();
    }
    else
    {
        category();
    }
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
    printf("\n\n\t\t are You Agree with us press '1' for booking_____");
    scanf("%d",&agre);
    if(agre==1)
    {
        booking();
    }
    else
    {
        category();
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
    printf("\n\n\t\t are You Agree with us press '1' For Booking____");
    scanf("%d",&agre);
    if(agre==1)
    {
        booking();
    }
    else
    {
        category();
    }
}
void category()
{
    printf("\t\t\t\t1.Single Bed\n");
    printf("\t\t\t\t2.Double Bed\n");
    printf("\t\t\t\t3.Sweet Bed\n");
    printf("\t\t\t\t4.Back\n");
    printf("\n\n\n\t\t\t\t Enter Your Choice____");
    scanf("%d",&agre);
    if(agre==1)
    {
        single();
    }
    else if(agre==2)
    {
        Double_bed();
    }
    else if(agre==3)
    {
        Sweet();
    }
    else
    {
        menu();
    }
}
void booking()
{
    printf("\t\t\t\tEnter Customer Name_____");
    scanf("%s",hotel_customer.name);
    printf("\t\t\t\tEnter Customer Gender_____");
    scanf("%s",hotel_customer.gender);
    printf("\t\t\t\tEnter Customer Nationality_____");
    scanf("%s",hotel_customer.nationality);
    printf("\t\t\t\tEnter Customer Service Category____");
    scanf("%s",hotel_customer.r_type);
    printf("\t\t\t\tEnter Customer Room Number____");
    scanf("%d",&hotel_customer.r_number);
    printf("\t\t\t\tEnter Customer Phone Number_____");
    scanf("%d",&hotel_customer.p_number);
    printf("\n\n\n\t\t\t\tIf You Want To Add more Data press '1'____");
    scanf("%d",&agre);

    if(agre==1)
    {
        booking();
    }
    else
    {
        menu();
    }

}
void menu()
{
    int choice;
    printf("\n\n\n");
    printf("\t\t\t\t1.Customer Booking\n");
    printf("\t\t\t\t2.Room Category\n");
    printf("\t\t\t\t3.Delete Customer\n");
    printf("\t\t\t\t4.Search Customer\n");
    printf("\t\t\t\t5.View Customer Record\n");
    printf("\t\t\t\t6.Restaurant Service\n");
    printf("\t\t\t\t7.Exit\n");
    printf("\n\n\t\t\t\t Select Your Option______");
    scanf("%d",&choice);
    switch(choice)
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
    printf("\n\n\n\n");
    printf("\t\t\t\t================================\n");
    printf("\t\t\t\t  WELCOME TO HOTEL MANAGEMENT   \n");
    printf("\t\t\t\t================================\n");
    printf("\n\n\t\t\t\tEnter Any Key To Continue_____");
    _getch();
    system("cls");
    menu();
}
