#include<stdio.h>
int main()
{
    int number,subject;

    ///*******this array for Grade points
    float student_course[20][20];

    ///******variable for calculate cgpa
    float student_cgpa[20];

    ///this variable for maximum to minimum cgpa
    int max1,max2,max3,max4,max5,max6,max7,max8,max9,max10;
    int location1,location2,location3,location4,location5,location6,location7,location8,location9,location10;

    ///this variable is for loop
    int student,course,calculation,result,counter;

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
            student_cgpa[student]=student_cgpa[student]/(float)(subject*3);
        }
    }
    ///printout 10 student cgpa with array and loop

    for(result=0; result<number; result++)
    {
        printf("%d Student CGPA is %.2f\n",result+1,student_cgpa[result]);
    }

    ///1st maximum cgpa find
        max1=student_cgpa[0];
        location1=1;
        if(student_cgpa[1]>max1)
        {
            max1=student_cgpa[1];
            location1=1+1;
            printf("maximum is %d student cgpa %.2f\n",location1,max1);
        }
        else if(student_cgpa[2]>max1)
        {
            max1=student_cgpa[2];
            location1=2+1;
            printf("maximum is %d student cgpa %.2f\n",location1,max1);
        }
        else if(student_cgpa[3]>max1)
        {
            max1=student_cgpa[3];
            location1=3+1;
            printf("maximum is %d student cgpa %.2f\n",location1,max1);
        }
        else if(student_cgpa[4]>max1)
        {
            max1=student_cgpa[4];
            location1=4+1;
            printf("maximum is %d student cgpa %.2f\n",location1,max1);
        }
        else if(student_cgpa[5]>max1)
        {
            max1=student_cgpa[5];
            location1=5+1;
            printf("maximum is %d student cgpa %.2f\n",location1,max1);
        }
        else if(student_cgpa[6]>max1)
        {
            max1=student_cgpa[6];
            location1=6+1;
            printf("maximum is %d student cgpa %.2f\n",location1,max1);
        }
        else if(student_cgpa[7]>max1)
        {
            max1=student_cgpa[7];
            location1=7+1;
            printf("maximum is %d student cgpa %.2f\n",location1,max1);
        }
        else if(student_cgpa[8]>max1)
        {
            max1=student_cgpa[8];
            location1=8+1;
            printf("maximum is %d student cgpa %.2f\n",location1,max1);
        }
        else{
            max1=student_cgpa[9];
            location1=9+1;
           printf("maximum is %d student cgpa %.2f\n",location1,max1);
        }

    for(counter=0; counter<student-1; counter++)
    {
        student_cgpa[counter]=student_cgpa[counter+1];
    }
    ///2nd maximum find
            max2=student_cgpa[0];
        location2=1;
        if(student_cgpa[1]>max2)
        {
            max2=student_cgpa[1];
            location2=1+1;
            printf("2nd maximum is %d student cgpa %.2f\n",location2,max2);
        }
        else if(student_cgpa[2]>max2)
        {
            max2=student_cgpa[2];
            location2=2+1;
            printf("2nd maximum is %d student cgpa %.2f\n",location2,max2);
        }
        else if(student_cgpa[3]>max2)
        {
            max2=student_cgpa[3];
            location2=3+1;
            printf("2nd maximum is %d student cgpa %.2f\n",location2,max2);
        }
        else if(student_cgpa[4]>max2)
        {
            max2=student_cgpa[4];
            location2=4+1;
            printf("2nd maximum is %d student cgpa %.2f\n",location2,max2);
        }
        else if(student_cgpa[5]>max2)
        {
            max2=student_cgpa[5];
            location2=5+1;
            printf("2nd maximum is %d student cgpa %.2f\n",location2,max2);
        }
        else if(student_cgpa[6]>max2)
        {
            max2=student_cgpa[6];
            location2=6+1;
            printf("2nd maximum is %d student cgpa %.2f\n",location2,max2);
        }
        else if(student_cgpa[7]>max2)
        {
            max2=student_cgpa[7];
            location2=7+1;
            printf("2nd maximum is %d student cgpa %.2f\n",location2,max2);
        }
        else{
            max2=student_cgpa[8];
            location2=8+1;
            printf("2nd maximum is %d student cgpa %.2f\n",location2,max2);
        }
    for(counter=0; counter<student-2; counter++)
    {
        student_cgpa[counter]=student_cgpa[counter+1];
    }

    return 0;
}







