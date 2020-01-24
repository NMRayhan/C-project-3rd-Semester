#include<stdio.h>
#include<string.h>
#include<stdlib.h>
///Structure Declaration
struct student
{
    int id;
    char name[20];
    float student_course[20][20];
    float student_cgpa;
} students[20];
///function for Printout
void print_studentinfo(struct student first_student)
{
    fflush(stdin);
    printf("\t\tName: %s\n",first_student.name);
    printf("\t\tID: %d\n",first_student.id);
    printf("\t\tCGPA: %.2f\n",first_student.student_cgpa);
    printf("\n");
}
int main()
{
    ///Declaration FILE
    FILE *GpaList;
    GpaList = fopen("GPA_List.txt","w");
    if(GpaList==NULL)
    {
        printf("File Don't create successfully\n");
        exit(1);
    }
    ///this variable is Student Details
    int number,subject;

    ///this variable is for loop
    int student,course,info,fileloop;

    printf("\t\tHow Many Student are you calculation cgpa____");
    scanf("%d",&number);
    fprintf(GpaList,"How many Student are you calculation CGPA\n");
    fprintf(GpaList,"%d\n",number);
    printf("\t\tHow many Subject Per Student____");
    scanf("%d",&subject);
    fprintf(GpaList,"How many Subject per Student\n");
    fprintf(GpaList,"%d\n",subject);
    ///this loop is for student count
    for(student=0; student<number; student++)
    {
        printf("\t\tEnter your student name____");
        scanf("%s",&students[student].name);
        fprintf(GpaList,"%s\t",students[student].name);
        printf("\t\tEnter your student ID____");
        scanf("%d",&students[student].id);
        fprintf(GpaList,"%d\t",students[student].id);

        ///this loop is for course count
        for(course=0; course<subject; course++)
        {
            fflush(stdin);
            printf("\t\tEnter %d student %d course____",student+1,course+1);
            scanf("%f",&students[student].student_course[student][course]);
            fprintf(GpaList,"%.2f\t",students[student].student_course[student][course]);

        }
          fprintf(GpaList,"\n");
    }
    fprintf(GpaList,"Calculated CGPA:-\n");
    fprintf(GpaList,"_____________________________________\n");
    fprintf(GpaList,"Name\tID\tCGPA\n");
    fprintf(GpaList,"-------------------------------------\n");

    ///this loop is calculation cgpa

        for(student=0; student<number; student++)
        {
            students[student].student_cgpa=0;
            for(course=0; course<subject; course++)
            {
                students[student].student_cgpa=students[student].student_cgpa+students[student].student_course[student][course]*3;
            }
            ///all subject is 3 credit
            students[student].student_cgpa=students[student].student_cgpa/(float)(subject*3);
            fprintf(GpaList,"%s\t%d\t%.2f\n",students[student].name,students[student].id,students[student].student_cgpa);
        }

     for(info=0; info<number; info++){
        if(students[info].student_cgpa>students[info+1].student_cgpa){
            printf("\t\tMaximum Cgpa is %.2f\n",students[info].student_cgpa);
            fprintf(GpaList,"Maximum CGPA is %.2f\n",students[info].student_cgpa);
        }
     }
    ///call the function
    for(info=0; info<number; info++)
    {
        print_studentinfo(students[info]);
    }
    fclose(GpaList);

    _getch();
}
