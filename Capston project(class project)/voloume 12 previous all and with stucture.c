#include<stdio.h>
#include<string.h>
struct student
{
    int id;
    char name[20];
    float student_course[20][20];
    float student_cgpa;
} students[20];
int main()
{
    int number,subject;

    ///this variable is for loop
    int student,course,calculation,result,counter,delet;

    printf("How Many Student are you calculation cgpa\n");
    scanf("%d",&number);
    printf("How many Subject Per Student\n");
    scanf("%d",&subject);
    ///this loop is for student count
    for(student=0; student<number; student++)
    {
        printf("Enter your student name..\n");
        scanf("%s",&students[student].name);
        printf("Enter your student ID..\n");
        scanf("%d",&students[student].id);
        ///this loop is for course count
        for(course=0; course<subject; course++)
        {
            printf("Enter %d student %d course\n",student+1,course+1);
            scanf("%f",&students[student].student_course[student][course]);
        }
    }

    ///this loop is calculation cgpa
    for(calculation=0; calculation<number; calculation++)
    {
        for(student=0; student<number; student++)
        {
            students[student].student_cgpa=0;
            for(course=0; course<subject; course++)
            {
                students[student].student_cgpa=students[student].student_cgpa+students[student].student_course[student][course]*3;
            }
            ///all subject is 3 credit
            students[student].student_cgpa=students[student].student_cgpa/(float)(subject*3);
        }
    }
    ///printout 10 student cgpa with array and loop

    for(result=0; result<number; result++)
    {
        printf("NAME: %s\n",students[result].name);
        printf("ID: %d\n",students[result].id);
        printf("CGPA: %.2f\n",students[result].student_cgpa);
        printf("\n");
    }
    return 0;
}
