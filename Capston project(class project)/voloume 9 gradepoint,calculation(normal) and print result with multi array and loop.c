#include<stdio.h>
int main()
{
    int number,subject;
    ///*******this array for Grade points
    float student_course[20][20];
    ///******variable for calculate cgpa
    float student_cgpa[20];
    ///this variable is for loop
    int student,course,calculation,result;
    printf("How Many Student are you calculation cgpa\n");
    scanf("%d",&number);
    printf("How many Subject Per Student\n");
    scanf("%d",&subject);
    ///this loop is for student count
    for(student=0; student<number; student++)
    {
        ///this loop is for course count
        for(course=0; course<subject; course++)
        {
            printf("Enter %d student %d course\n",student+1,course+1);
            scanf("%f",&student_course[student][course]);
        }
    }

    ///this loop is calculation cgpa
    for(calculation=0; calculation<number; calculation++)
    {
        for(student=0; student<number; student++)
        {
            student_cgpa[student]=0;
            for(course=0; course<subject; course++)
            {
                student_cgpa[student]=student_cgpa[student]+student_course[student][course]*3;
            }
            student_cgpa[student]=student_cgpa[student]/30;
        }
    }
    ///printout 10 student cgpa with array and loop

    for(result=0; result<number; result++)
    {
        printf("%d Student CGPA is %.2f\n",result+1,student_cgpa[result]);
    }
    return 0;
}






