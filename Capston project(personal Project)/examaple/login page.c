#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char username[20];
char password[10];
void login()
{
    printf("Please Enter Username\n");
    gets(username);

    printf("Please Enter password\n");
    gets(password);

    if(strcmp(username, "rayhan") == 0)
    {
        if(strcmp(password, "rayhan") == 0)
        {
            printf("You are Successfully Login.\n");
        }
        else
        {
            printf("Wrong password.\n");
        }
    }
    else
    {
        printf("your usename is incorrect.\n");
    }
}
int main()
{
    _getch();
    login();
}
