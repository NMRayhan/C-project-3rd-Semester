#include<stdio.h>
#include<string.h>
struct customer
{
    char name[20];
    char nationality[10];
    char gender[10];
    char r_category[10];
    int r_number;
    int p_number;
} visitor1;
void Sweet()
{
    printf("a single room with a king/queen/full/twin bed(s), a work desk and chair, a bathroom, and maybe a closet,");
    printf("a sofa, TV, and a dresser added in. A suite however is a much larger accommodation.");
    _getch();
    system("cls");
    menu();
}
void Double_bed()
{
    printf("a double room will generally be 1 bed for two people, the bed will either be a Double,");
    printf("Queen or King size bed, if you are traveling with friends and want to share a room you need to book a twin room which will have to single beds in.");
    _getch();
    system("cls");
    menu();
}
void single()
{
    printf("Our single rooms are small but very cozy with an area between 11-14 sqm.");
    printf("The rooms are equipped with everything you need for comfortable accommodation.");
    printf("All rooms have a 105 cm wide bed, a small closet and a sofa bed that can be booked for an additional person. A lovely view over a quiet street or courtyard.\n");
    _getch();
    system("cls");
    menu();
}
void restaurant()
{
    printf("\t\t\tThis Service upcoming Update......\n");
    _getch();
    system("cls");
    menu();

}
void view_customer_record()
{
    printf("\t1.");
    puts(visitor1.name);
    printf("\n");
    printf("\t2.");
    puts(visitor1.nationality);
    printf("\n");
    printf("\t3.phone Number..%d\n",visitor1.p_number);
    _getch();
    system("cls");
    menu();
}
void searching()
{
    printf("Please Enter your Customer Name..\n");
    gets(visitor1.name);
    if(visitor1.name==visitor1.name)
    {
        puts(visitor1.name);
        printf("\n");
        puts(visitor1.gender);
        printf("\n");
        puts(visitor1.nationality);
        printf("\n");
        printf("customer phone Number..%d\n",visitor1.p_number);
        printf("Customer Room Number..%d\n",visitor1.r_number);
    }
    else
    {
        printf("Customer Details Not Found...thank you\n");
    }
    _getch();
    system("cls");
    menu();
}
void deletion()
{
    printf("Enter Customer Name...\n");
    gets(visitor1.name);
    printf("Enter Customer Gender..\n");
    gets(visitor1.gender);
    printf("Enter Customer Nationality..\n");
    gets(visitor1.nationality);
    printf("Deletion Successfully...Return Main menu\n");
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
void booking()
{
    int restaurant_help;
    printf("Enter customer name..\n");
    gets(visitor1.name);
    printf("Enter customer Gender..\n");
    gets(visitor1.gender);
    printf("Enter customer Nationality..\n");
    gets(visitor1.nationality);
    printf("Enter room Category..\n");
    gets(visitor1.r_category);
    printf("Enter Customer Phone Number..\n");
    scanf("%d",&visitor1.p_number);
    printf("Enter Customer Room Number..\n");
    scanf("%d",&visitor1.r_number);
    printf("Customer Record Saved Successfully....thank you\n\n\n");
    printf("Are You Have Need Restaurants Service press 1...otherwise 0\n");
    scanf("%d",&restaurant_help);
    system("cls");
    if(restaurant_help==1)
    {
        restaurant();
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
    int number;
    printf("************************************************************\n");
    printf("\t\t1.Booking\n");
    printf("\t\t2.Category\n");
    printf("\t\t3.Deletion\n");
    printf("\t\t4.Searching\n");
    printf("\t\t5.View Customer Record\n");
    printf("\t\t6.Restaurants Service\n");
    printf("\t\t7.Exit\n");
    printf("************************************************************\n");
    printf("Selection your Option...");
    scanf("%d",&number);
    system("cls");
    option(number);
}
void main()
{

    system("color 0A");
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
    system("color 0D");
    system("cls");
    menu();
}
