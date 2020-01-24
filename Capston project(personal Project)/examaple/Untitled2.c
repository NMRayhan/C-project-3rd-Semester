#include<stdio.h>
#include<string.h>
#include<stdlib.h>
///this variable Declare only for login
char username[20];
char password[10];
FILE *C_details,*shop;
///this Structure Customer Information
struct customer
{
    char name[20];
    char gender[10];
    char nationality[10];
    char room_category[10];
    int room_number;
    int phone_number;
} visitor1;
///this Structure Restaurant service
struct customerShop
{
    char food[20];
    int prize;
} cs1;

int pq,sum,a,c,h_customer,name,opt;

char h_name[20],pn[20],again;
///this function is Customer Bay any product
void customer_site()
{
    shop=fopen("shop_service.txt","r");
    ///this While loop is Scan File to display in shop item
    while(fscanf(shop,"%s\t\t%d\n",cs1.food,&cs1.prize)!=EOF)
    {
        printf("\t\t\t%s\t\t%d\n",cs1.food,cs1.prize);
    }
    fclose(shop);
    printf("\n\n\n");
    printf("\t\t\tSubmit Your Product Name____");
    scanf("%s",pn);
    printf("\t\t\tEnter Product Quantity____");
    scanf("%d",pq);
    while(pn!=0)
    {
        shop=fopen("shop_service.txt","r");
        while(fscanf(shop,"%s\t\t%d\n",cs1.food,&cs1.prize)!=EOF)
        {
            if(strcmp(pn,cs1.food)==0)
            {
                sum=cs1.prize*pq;
                printf("\t\t\tyou can pay %d TAKA\n",sum);
                _getch();
                menu();
            }
        }
    }
    fclose(shop);
    printf("\n\n\n");
    printf("\t\t\tDo you want to again Shopping press 1 otherwise 2_______");
    scanf("%d",&opt);
    if(opt==1)
    {
        system("cls");
        customer_site();
    }
    else
    {
        system("cls");
        menu();
    }
}
///this function is Display Shop item only for manager
void disply_product()
{
    ///shop file open in read mood
    shop=fopen("shop_service.txt","r");
    while(fscanf(shop,"%s\t\t%d\n",cs1.food,&cs1.prize)!=EOF)
    {
        printf("\n");
        printf("\t\t\t%s\t\t%d\n",cs1.food,cs1.prize);
    }
    fclose(shop);
    _getch();
    system("cls");
    manager();
}
///this function only for add product in manager
void add_product()
{
    ///now open in file Apend mood
    shop=fopen("shop_service.txt","a+");
    if(shop==NULL)
    {
        printf("File Create Successfully\n");
        exit(1);
    }
    printf("\n\n\n");
    fflush(stdin);
    printf("\t\t\tPlease Enter Food Name____");
    fflush(stdin);
    scanf("%s",cs1.food);
    fflush(stdin);
    printf("\t\t\tPlease Enter Food Prize_____");
    fflush(stdin);
    scanf("%d",&cs1.prize);
    fprintf(shop,"%s\t\t%d\n",cs1.food,cs1.prize);
    fclose(shop);
    system("cls");
    printf("\n\n\n");
    printf("\t\t\tAdd more press 1 otherwise Enter___");
    scanf("%d",&c);
    if(c==1)
    {
        system("cls");
        add_product();
    }
    else
    {
        system("cls");
        menu();
    }
}
///this function only for manager
void manager()
{
    int e;
    printf("\n\n\n");
    printf("\t\t\t1.Add Product\n");
    printf("\t\t\t2.Display Product\n");
    printf("\t\t\t3.Back\n\n");
    printf("\t\t\t>>>>Enter Your Choice___");
    scanf("%d",&e);
    if(e==1)
    {
        system("cls");
        add_product();
    }
    else if(e==2)
    {
        system("cls");
        disply_product();
    }
    else
    {
        system("cls");
        restaurant();
    }
}
///this function only for reastaurant service
void restaurant()
{
    printf("\n\n\n");
    printf("\t\t\t1.Are you Manager\n");
    printf("\t\t\t2.Are you Customer\n");
    printf("\t\t\t3.Back\n\n");
    printf("\t\t\tplease Select Your Option___");
    scanf("%d",&a);
    system("cls");
    if(a==1)
    {
        manager();
    }
    else if(a==2)
    {
        customer_site();
    }
    else
    {
        menu();
    }
}
///this function Work customer search in hotel
void searching()
{
    printf("\n\n\n");
    printf("\t\tWhat is your customer name___");
    printf("\n");
    scanf("%s",h_name);
    ///hotel customer details file open
    C_details=fopen("Customer_Details.txt","a+");
    ///scan all name and other things In End of while loop
    while(fscanf(C_details,"%s\t%s\t%\t%s\t%d\t%d\n",visitor1.name,visitor1.gender,visitor1.nationality,visitor1.room_category,&visitor1.room_number,&visitor1.phone_number)!= EOF)
    {
        if(strcmp(h_name,visitor1.name)==0)
        {
            ///now print this variable with in a value or name other things
            printf("\t\tName__%s\n",visitor1.name);
            printf("\t\tGander__%s\n",visitor1.gender);
            printf("\t\tNationality__%s\n",visitor1.nationality);
            printf("\t\tRoom Category__%s\n",visitor1.room_category);
            printf("\t\tRoom Number__%d\n",visitor1.room_number);
            printf("\t\tphone Number__%d\n",visitor1.phone_number);
        }
    }
    ///hotel customer file close
    fclose(C_details);
    _getch();
    system("cls");
    menu();
}
///this function only for Room system show
void Sweet()
{
    printf("\n\n\n");
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
///this function only for show room system
void Double_bed()
{
    printf("\n\n\n");
    printf("*****************______our room service are______*****************\n");
    printf("\n");
    printf("\t\t1.Double Room Will Generally 1 Bed for Two Persons\n");
    printf("\t\t2.Queen or King Size Bed\n");
    printf("\t\t3.Refrigerator\n");
    printf("\t\t4.Air Condition System\n");
    printf("\t\t5.One Single Desk with Chair\n");
    printf("\t\t6.Cloth Stand\n");
    printf("\t\t\t\t Cost:- Per Night 6000.00TK\n\n\n");
    printf("\t\t are You Agree with us press 1 For Booking____");
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
///this function only for show room system
void single()
{
    printf("\n\n\n");
    printf("*****************______our room service are______*****************\n");
    printf("\n");
    printf(">>>>Our single rooms are small but very cozy with an area between 11-14 sqm\n");
    printf("\t\t1.One Single Bed and other are include\n");
    printf("\t\t2.Refrigerator\n");
    printf("\t\t3.Air Condition System\n");
    printf("\t\t4.One Single Desk with Chair\n");
    printf("\t\t5.Cloth Stand\n");
    printf("\t\t\t\t Cost:- Per Night 4000.00TK\n\n\n");
    printf("\t\t are You Agree with us press 1 for booking_____");
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
///this function show how many customer now in a hotel
void view_customer_record()
{
    ///again hotel customer details file open
    C_details=fopen("Customer_Details.txt","r");
    ///same scan all element in file
    while(fscanf(C_details,"%s\t%s\t%s\t%s\t%d\t%d\n",visitor1.name,visitor1.gender,visitor1.nationality,visitor1.room_category,&visitor1.room_number,&visitor1.phone_number)!= EOF)
    {
        printf("\n\n");
        printf("Name___%s\n",visitor1.name);
        printf("Gender___%s\n",visitor1.gender);
        printf("Nationality___%s\n",visitor1.nationality);
        printf("Service Category___%s\n",visitor1.room_category);
        printf("Room Number___%d\n",visitor1.room_number);
        printf("Customer Phone Number___%d\n",visitor1.phone_number);
    }
    fclose(C_details);
    _getch();
    system("cls");
    menu();
}
FILE *fp;
///this function only for Delete customer
void deletion()
{
    ///now open a new file in delete customer in append plus mode
    fp=fopen("Deleted_customer.txt","w");
    if(fp==NULL)
    {
        printf("File Don't create successfully\n");
        exit(1);
    }
    printf("\n\n\n");
    printf("\t\tEnter Name Which Person checkout....\n");
    scanf("%s",h_name);
    ///same way customer details file open
    C_details=fopen("Customer_Details.txt","r+");
    while(fscanf(C_details,"%s\t%s\t%s\t%s\t%d\t%d\n",visitor1.name,visitor1.gender,visitor1.nationality,visitor1.room_category,&visitor1.room_number,&visitor1.phone_number)!=EOF)
    {
        ///this statement compare in value which one i delete
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
            }
            fclose(C_details);
            fclose(fp);
        }
    }
    _getch();
    system("cls");
    menu();
}
///this function only show how many room are here
void category()
{
    int room;
    printf("\n\n\n");
    printf("\t\tWe Service Our 3 System Room Service...\n");
    printf("\t\t1.Single\n");
    printf("\t\t2.Double\n");
    printf("\t\t3.Sweet\n");
    printf("\t\t4.Exit\n");
    printf("\t\tif you Return Main Menu...press any key Without This Option\n");
    system("color 0D");
    printf("\t\t>>>>Choice your Category____");
    scanf("%d",&room);
    system("cls");
    ///call room service
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
///this function only for booking hotel customer
void booking()
{
    ///1stly open file in here
    C_details=fopen("Customer_Details.txt","a+");
    if(C_details==NULL)
    {
        printf("File Don't create successfully\n");
        exit(1);
    }
    ///one by one input customer details and put the C_details Addressed file
    fflush(stdin);
    printf("\n\n\n");
    fflush(stdin);
    printf("\t\tEnter Customer Name___");
    fflush(stdin);
    scanf("%s",visitor1.name);
    fprintf(C_details,"%s\t",visitor1.name);
    fflush(stdin);
    printf("\t\tEnter Customer Gender___");
    fflush(stdin);
    scanf("%s",visitor1.gender);
    fprintf(C_details,"%s\t",visitor1.gender);
    fflush(stdin);
    printf("\t\tEnter Customer Nationality___");
    fflush(stdin);
    scanf("%s",visitor1.nationality);
    fprintf(C_details,"%s\t",visitor1.nationality);
    fflush(stdin);
    printf("\t\tRoom category___");
    fflush(stdin);
    scanf("%s",visitor1.room_category);
    fprintf(C_details,"%s\t",visitor1.room_category);
    fflush(stdin);
    printf("\t\tEnter Booked Room Number___");
    fflush(stdin);
    scanf("%d",&visitor1.room_number);
    fprintf(C_details,"%d\t",visitor1.room_number);
    fflush(stdin);
    printf("\t\tEnter customer Phone Number___");
    fflush(stdin);
    scanf("%d",&visitor1.phone_number);
    fprintf(C_details,"%d\n",visitor1.phone_number);

    fclose(C_details);
    ///this statement again pose system
    printf("\t\tCustomer Record Saved Successfully....thank you\n");
    printf("\t\tEnter 2 for more booking\n");
    printf("\t\tAre You Have Need Restaurants Service press 1_____");
    scanf("%d",&restaurant_help);
    system("cls");
    if(restaurant_help==1)
    {
        customer_site();
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
///this function only for call main menu option using if else statement same way we use switch case statement
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
///this function show our system main menu
void menu()
{
    system("color 0D");
    int number;
    printf("\n\n\n");
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
    printf("\t\tSelection your Option___");
    scanf("%d",&number);
    system("cls");
    ///this function call for option selection
    option(number);
}
///user name and password system only for this function
void login()
{
    system("color 0A");
    printf("\t\t\t_______________SAFTY FIRST______________\n");
    printf("\t\t\t1.Please Enter Username__");
    gets(username);

    printf("\t\t\t2.Please Enter password__");
    gets(password);

    if(strcmp(username, "rayhan") == 0)
        ///this compare is only which name i give and which name programmer given
    {
        if(strcmp(password, "rayhan") == 0)
            ///this compare is only which password i give and which password programmer given
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
///this is main function where program start
int main()
{
    system("color 0D");
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
    ///call login page
    menu();
}

