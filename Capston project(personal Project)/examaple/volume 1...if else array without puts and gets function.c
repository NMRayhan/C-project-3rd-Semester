#include<stdio.h>
#include<string.h>
    char hotel[10][1000]={"customer_name","Gender","customer_nationality","Room_category","phone_number","Room_number",};
    char name[10][100],gender[10][100],nationality[10][100],room_category[10][100];
    int p_number[10],r_number[10];
void Sweet()
{
    printf("-----------------------------------------------------\n");
    printf("a single room with a king/queen/full/twin bed(s), a work desk and chair, a bathroom, and maybe a closet,\n");
    printf("a sofa, TV, and a dresser added in. A suite however is a much larger accommodation.\n");
    printf("-----------------------------------------------------\n");
    _getch();
    system("cls");
    menu();
}
void Double_bed()
{
    printf("-----------------------------------------------------\n");
    printf("a double room will generally be 1 bed for two people, the bed will either be a Double,\n");
    printf("Queen or King size bed, if you are traveling with friends and want to share a room you need to book a twin room which will have to single beds in.\n");
    printf("-----------------------------------------------------\n");
    _getch();
    system("cls");
    menu();
}
void single()
{
    printf("-----------------------------------------------------\n");
    printf("Our single rooms are small but very cozy with an area between 11-14 sqm.\n");
    printf("The rooms are equipped with everything you need for comfortable accommodation.\n");
    printf("All rooms have a 105 cm wide bed, a small closet and a sofa bed that can be booked for an additional person.\n");
    printf("A lovely view over a quiet street or courtyard.\n");
    printf("-----------------------------------------------------\n");
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
    printf("1st customer...\n");
    printf("%s\n",name[0][100]);
    printf("%s\n",gender[0][100]);
    printf("%s\n",nationality[0][100]);
    printf("%d\n",p_number[0]);
    printf("%d\n",r_number[0]);
    printf("2nd customer...\n");
    printf("%s\n",name[1][100]);
    printf("%s\n",gender[1][100]);
    printf("%s\n",nationality[1][100]);
    printf("%d\n",p_number[1]);
    printf("%d\n",r_number[1]);
    printf("3rd customer...\n");
    printf("%s\n",name[2][100]);
    printf("%s\n",gender[2][100]);
    printf("%s\n",nationality[2][100]);
    printf("%d\n",p_number[2]);
    printf("%d\n",r_number[2]);
    _getch();
    system("cls");
    menu();
}
void searching()
{
    char cus[10][100];
    printf("Please Enter your Customer Name..\n");
    scanf("%s",&cus[0][100]);
    if(cus[0][100]==name[0][100])
    {
        printf("%s",name[0][100]);
        printf("\n");
        printf("%s",gender[0][100]);
        printf("\n");
        printf("%s",nationality[0][100]);
        printf("\n");
        printf("customer phone Number..%d\n",p_number[0]);
        printf("Customer Room Number..%d\n",r_number[0]);
    }
    else if(cus[1][100]==name[1][100]){

        printf("%s",name[1][100]);
        printf("\n");
        printf("%s",gender[1][100]);
        printf("\n");
        printf("%s",nationality[1][100]);
        printf("\n");
        printf("customer phone Number..%d\n",p_number[1]);
        printf("Customer Room Number..%d\n",r_number[1]);
    }
    else if(cus[2][100]==name[2][100]){
        printf("%s",name[2][100]);
        printf("\n");
        printf("%s",gender[2][100]);
        printf("\n");
        printf("%s",nationality[2][100]);
        printf("\n");
        printf("customer phone Number..%d\n",p_number[2]);
        printf("Customer Room Number..%d\n",r_number[2]);
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
    char sus[10][100],gen[10][100],nan[10][100];
    printf("Enter %s\n",hotel[0][100]);
    scanf("%s",&sus[0][100]);
    printf("Enter customer %s\n",hotel[1][100]);
    scanf("%s",&sus[0][100]);
    printf("Enter %s\n",hotel[2][100]);
    scanf("%s",&nan[0][100]);
    if(sus[0][100]==name[0][100] || gen[0][100]==gender[0][100] || nan[0][100]==nationality[0][100]){
    //1st customer
    name[0][100]=name[1][100];
    gender[0][100]=gender[1][100];
    nationality[0][100]=nationality[1][100];
    room_category[0][100]=room_category[1][100];
    p_number[0]=p_number[1];
    r_number[0]=r_number[1];
    //2nd customer
    name[1][100]=name[2][100];
    gender[1][100]=gender[2][100];
    nationality[1][100]=nationality[2][100];
    room_category[1][100]=room_category[2][100];
    p_number[1]=p_number[2];
    r_number[1]=r_number[2];
    //3nd customer
    name[2][100]=name[3][100];
    gender[2][100]=gender[3][100];
    nationality[2][100]=nationality[3][100];
    room_category[2][100]=room_category[3][100];
    p_number[2]=p_number[3];
    r_number[2]=r_number[3];
    printf("Deletion Successfully...Return Main menu\n");
    }
    else{
        printf("Customer Record Not found..\n");
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
    int count;
    int restaurant_help;
    printf("\t\t\t\t 1st customer\n");
    printf("Enter %s\n",hotel[0]);
    scanf("%s",&name[0]);
    printf("Enter customer %s\n",hotel[1]);
    scanf("%s",&gender[0]);
    printf("Enter %s\n",hotel[2]);
    scanf("%s",&nationality[0]);
    printf("Enter %s\n",hotel[3]);
    scanf("%s",&room_category[0]);
    printf("Enter customer %s\n",hotel[4]);
    scanf("%d",&p_number[0]);
    printf("Enter Customer %s\n",hotel[5]);
    scanf("%d",&r_number[0]);
    printf("\t\t\t\t 2nd customer\n");
    printf("Enter %s\n",hotel[0]);
    scanf("%s",&name[1]);
    printf("Enter customer %s\n",hotel[1]);
    scanf("%s",&gender[1]);
    printf("Enter %s\n",hotel[2]);
    scanf("%s",&nationality[1]);
    printf("Enter %s\n",hotel[3]);
    scanf("%s",&room_category[1]);
    printf("Enter customer %s\n",hotel[4]);
    scanf("%d",&p_number[1]);
    printf("Enter Customer %s\n",hotel[5]);
    scanf("%d",&r_number[1]);
    printf("\t\t\t\t 3rd customer\n");
    printf("Enter %s\n",hotel[0]);
    scanf("%s",&name[2]);
    printf("Enter customer %s\n",hotel[1]);
    scanf("%s",&gender[2]);
    printf("Enter %s\n",hotel[2]);
    scanf("%s",&nationality[2]);
    printf("Enter %s\n",hotel[3]);
    scanf("%s",&room_category[2]);
    printf("Enter customer %s\n",hotel[4]);
    scanf("%d",&p_number[2]);
    printf("Enter Customer %s\n",hotel[5]);
    scanf("%d",&r_number[2]);
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

