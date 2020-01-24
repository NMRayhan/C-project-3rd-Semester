#include<stdio.h>
int main()
{
    ///*******this array for Grade points*********//
    float student1_gradepoint[10];
    float student2_gradepoint[10];
    float student3_gradepoint[10];
    float student4_gradepoint[10];
    float student5_gradepoint[10];
    float student6_gradepoint[10];
    float student7_gradepoint[10];
    float student8_gradepoint[10];
    float student9_gradepoint[10];
    float student10_gradepoint[10];
    int count,count1,student;
    ///******variable for calculate cgpa*********//
    float student1_cgpa,student2_cgpa;
    float student3_cgpa,student4_cgpa;
    float student5_cgpa,student6_cgpa;
    float student7_cgpa,student8_cgpa;
    float student9_cgpa,student10_cgpa;

    ///1st student grade points input
    printf("How many Student are cgpa calculation\n");
    printf("Maximum 10 student\n");
    scanf("%d",&student);

    ///this loop for student
    for(count1=0; count1<student; count1++)
    {
        ///this loop is course count
        for(count=0; count<10; count++)
        {
            printf("Enter student 1 grade point %d\n",count+1);
            scanf("%f",&student1_gradepoint[count]);
        }

        ///2nd student gradepoints input

        for(count=0; count<10; count++)
        {
            printf("Enter Student 2 grade point %d\n",count+1);
            scanf("%f",&student2_gradepoint[count]);
        }

        ///3rd student grade points input

        for(count=0; count<1; count++)
        {
            printf("Enter student 3 grade point %d\n",count+1);
            scanf("%f",&student3_gradepoint[count]);
        }

        ///4th student grade points input

        for(count=0; count<10; count++)
        {
            printf("Enter student 4 grade point %d\n",count+1);
            scanf("%f",student4_gradepoint[count]);
        }

        ///5th student grade points input

        for(count=0; count<10; count++)
        {
            printf("Enter student 5 grade point %d\n",count+1);
            scanf("%f",student5_gradepoint[count]);
        }

        ///6th student grade points input

        for(count=0; count<10; count++)
        {
            printf("Enter student 6 grade point %d\n",count+1);
            scanf("%f",&student6_gradepoint[count]);
        }

        ///7th student grade points input

        for(count=0; count<10; count++)
        {
            printf("Enter student 7 grade point %d\n",count+1);
            scanf("%f",&student7_gradepoint[count]);
        }

        ///8th student grade points input

        for(count=0; count<10; count++)
        {
            printf("Enter student 8 grade point %d\n",count+1);
            scanf("%f",&student8_gradepoint[count]);
        }

        ///9th student grade points input

        for(count=0; count<10; count++)
        {
            printf("Enter student 9 grade point %d\n",count+1);
            scanf("%f",&student9_gradepoint[count]);
        }

        ///10th student grade points input

        for(count=0; count<10; count++)
        {
            printf("Enter student 10 grade point %d\n",count+1);
            scanf("%f",&student10_gradepoint[count]);
        }
    }

    ///1st student cgpa calculation

    student1_cgpa=(((student1_gradepoint[0]*1)+(student1_gradepoint[1]*1)+(student1_gradepoint[2]*3)+(student1_gradepoint[3]*3)+(student1_gradepoint[4]*3)+(student1_gradepoint[5]*3)+(student1_gradepoint[6]*3)+(student1_gradepoint[7]*3)+(student1_gradepoint[8]*3)+(student1_gradepoint[9]*3))/(float)(26));

    ///2nd student cgpa calculation

    student2_cgpa=(((student2_gradepoint[0]*1)+(student2_gradepoint[1]*1)+(student2_gradepoint[2]*3)+(student2_gradepoint[3]*3)+(student2_gradepoint[4]*3)+(student2_gradepoint[5]*3)+(student2_gradepoint[6]*3)+(student2_gradepoint[7]*3)+(student2_gradepoint[8]*3)+(student2_gradepoint[9]*3))/(float)(26));

    ///3rd student cgpa calculation

    student3_cgpa=(((student3_gradepoint[0]*1)+(student3_gradepoint[1]*1)+(student3_gradepoint[2]*3)+(student3_gradepoint[3]*3)+(student3_gradepoint[4]*3)+(student3_gradepoint[5]*3)+(student3_gradepoint[6]*3)+(student3_gradepoint[7]*3)+(student3_gradepoint[8]*3)+(student3_gradepoint[9]*3))/(float)(26));

    ///4th student cgpa calculation

    student4_cgpa=(((student4_gradepoint[0]*1)+(student4_gradepoint[1]*1)+(student4_gradepoint[2]*3)+(student4_gradepoint[3]*3)+(student4_gradepoint[4]*3)+(student4_gradepoint[5]*3)+(student4_gradepoint[6]*3)+(student4_gradepoint[7]*3)+(student4_gradepoint[8]*3)+(student4_gradepoint[9]*3))/(float)(26));

    ///5th student cgpa calculation

    student5_cgpa=(((student5_gradepoint[0]*1)+(student5_gradepoint[1]*1)+(student5_gradepoint[2]*3)+(student5_gradepoint[3]*3)+(student5_gradepoint[4]*3)+(student5_gradepoint[5]*3)+(student5_gradepoint[6]*3)+(student5_gradepoint[7]*3)+(student5_gradepoint[8]*3)+(student5_gradepoint[9]*3))/(float)(26));

    ///6th student cgpa calculation

    student6_cgpa=(((student6_gradepoint[0]*1)+(student6_gradepoint[1]*1)+(student6_gradepoint[2]*3)+(student6_gradepoint[3]*3)+(student6_gradepoint[4]*3)+(student6_gradepoint[5]*3)+(student6_gradepoint[6]*3)+(student6_gradepoint[7]*3)+(student6_gradepoint[8]*3)+(student6_gradepoint[9]*3))/(float)(26));

    ///7th student cgpa calculation

    student7_cgpa=(((student7_gradepoint[0]*1)+(student7_gradepoint[1]*1)+(student7_gradepoint[2]*3)+(student7_gradepoint[3]*3)+(student7_gradepoint[4]*3)+(student7_gradepoint[5]*3)+(student7_gradepoint[6]*3)+(student7_gradepoint[7]*3)+(student7_gradepoint[8]*3)+(student7_gradepoint[9]*3))/(float)(26));

    ///8th student cgpa calculation

    student8_cgpa=(((student8_gradepoint[0]*1)+(student8_gradepoint[1]*1)+(student8_gradepoint[2]*3)+(student8_gradepoint[3]*3)+(student8_gradepoint[4]*3)+(student8_gradepoint[5]*3)+(student8_gradepoint[6]*3)+(student8_gradepoint[7]*3)+(student8_gradepoint[8]*3)+(student8_gradepoint[9]*3))/(float)(26));

    ///9th student cgpa calculation

    student9_cgpa=(((student9_gradepoint[0]*1)+(student9_gradepoint[1]*1)+(student9_gradepoint[2]*3)+(student9_gradepoint[3]*3)+(student9_gradepoint[4]*3)+(student9_gradepoint[5]*3)+(student9_gradepoint[6]*3)+(student9_gradepoint[7]*3)+(student9_gradepoint[8]*3)+(student9_gradepoint[9]*3))/(float)(26));

    ///10th student cgpa calculation

    student10_cgpa=(((student10_gradepoint[0]*1)+(student10_gradepoint[1]*1)+(student10_gradepoint[2]*3)+(student10_gradepoint[3]*3)+(student10_gradepoint[4]*3)+(student10_gradepoint[5]*3)+(student10_gradepoint[6]*3)+(student10_gradepoint[7]*3)+(student10_gradepoint[8]*3)+(student10_gradepoint[9]*3))/(float)(26));

    ///printout 10 student cgpa

    printf("1st student cgpa is %.2f\n",student1_cgpa);
    printf("2nd student cgpa is %.2f\n",student2_cgpa);
    printf("3rd student cgpa is %.2f\n",student3_cgpa);
    printf("4th student cgpa is %.2f\n",student4_cgpa);
    printf("5th student cgpa is %.2f\n",student5_cgpa);
    printf("6th student cgpa is %.2f\n",student6_cgpa);
    printf("7th student cgpa is %.2f\n",student7_cgpa);
    printf("8th student cgpa is %.2f\n",student8_cgpa);
    printf("9th student cgpa is %.2f\n",student9_cgpa);
    printf("10th student cgpa is %.2f\n",student10_cgpa);

    return 0;
}


