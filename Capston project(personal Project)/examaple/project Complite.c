#include<string.h>
#include<stdio.h>
void option(int number)
{
    system("cls");
    char hotel[10][1000]={"customer_name","customer_nationality","Gender","Room_category","phone_number","Room_number",};
    char booking[10][1000];
    int booking1[10][1000];
    int count,count1,p_number=0,r_number=0;
    char name=0,c_nationality=0,gender=0,room_category=0;
    switch(number)
    {
case 1:
    for(count=0;count<4;count++){
        printf("Enter %s..\n",hotel[count]);
        scanf("%s",booking[count]);
    }
    for(count1=4;count1<6;count1++){
        printf("Enter %s..\n",hotel[count1]);
        scanf("%s",booking1[count1]);
    }
    printf("Successfully Saved...........Thank you\n");
    _getch();
    system("cls");
    menu();
    break;
case 2:
    printf("\t\t#########Room Category##########\n");
    printf("\t\t1.Sweet Room\n");
    printf("\t\t2.Double\n");
    printf("\t\t3.Single");
    _getch();
    system("cls");
    menu();
    break;
case 3:
    for(count=0;count<4;count++){
        printf("Enter %s..\n",hotel[count]);
        scanf("%s",&booking[count]);
    }
    for(count1=4;count1<6;count1++){
        printf("Enter %s..\n",hotel[count1]);
        scanf("%s",&booking1[count1]);
    }
    _getch();
    system("cls");
    menu();
    break;
case 4:
    printf("\t\t1.Customer Name...\n");
    scanf("%s",&name);
    printf("\t\t2.Gender\n");
    scanf("%s",&gender);
    printf("\t\t3.Nationality..\n");
    scanf("%s",&c_nationality);
    _getch();
    system("cls");
    menu();
    break;
case 5:
    printf("\t\t1.Name....%s\n",booking[0]);
    printf("\t\t2.phone Number....%d\n",booking1[4]);
    printf("\t\t3.Nationality....%s\n",booking[1]);
    printf("\t\t4.Gender....%s\n",booking[2]);
    printf("\t\t5.Room Number....%d\n",booking1[5]);
    printf("\t\t6.Room Category....%s\n",booking[3]);
    _getch();
    system("cls");
    menu();
    break;
case 6:
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
    printf("\t\t6.Exit\n");
    printf("************************************************************\n");
    printf("Selection your Option...");
    scanf("%d",&number);
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

