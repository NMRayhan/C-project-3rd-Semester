#include<stdio.h>
int main()
{
    int number,subject;
    ///*******this array for Grade points*********//
    float student_course[20][20];
    ///******variable for calculate cgpa*********//
    float student_cgpa[20];
    ///this variable is for loop
    int student,course,calculation,result;
    ///this loop is for student count
    for(student=0; student<10; student++)
    {
        ///this loop is for course count
        for(course=0; course<10; course++)
        {
            printf("Enter %d student %d course\n",student+1,course+1);
            scanf("%f",&student_course[student][course]);
        }
    }

    ///1st student cgpa calculation
    student_cgpa[0]=0;
    student_cgpa[0]=student_cgpa[0]+student_course[0][0]*3;
    student_cgpa[0]=student_cgpa[0]+student_course[0][1]*3;
    student_cgpa[0]=student_cgpa[0]+student_course[0][2]*3;
    student_cgpa[0]=student_cgpa[0]+student_course[0][3]*3;
    student_cgpa[0]=student_cgpa[0]+student_course[0][4]*3;
    student_cgpa[0]=student_cgpa[0]+student_course[0][5]*3;
    student_cgpa[0]=student_cgpa[0]+student_course[0][6]*3;
    student_cgpa[0]=student_cgpa[0]+student_course[0][7]*3;
    student_cgpa[0]=student_cgpa[0]+student_course[0][8]*3;
    student_cgpa[0]=student_cgpa[0]+student_course[0][9]*3;
    student_cgpa[0]=student_cgpa[0]/30;

    ///2nd student cgpa calculation
    student_cgpa[1]=0;
    student_cgpa[1]=student_cgpa[1]+student_course[1][0]*3;
    student_cgpa[1]=student_cgpa[1]+student_course[1][1]*3;
    student_cgpa[1]=student_cgpa[1]+student_course[1][2]*3;
    student_cgpa[1]=student_cgpa[1]+student_course[1][3]*3;
    student_cgpa[1]=student_cgpa[1]+student_course[1][4]*3;
    student_cgpa[1]=student_cgpa[1]+student_course[1][5]*3;
    student_cgpa[1]=student_cgpa[1]+student_course[1][6]*3;
    student_cgpa[1]=student_cgpa[1]+student_course[1][7]*3;
    student_cgpa[1]=student_cgpa[1]+student_course[1][8]*3;
    student_cgpa[1]=student_cgpa[1]+student_course[1][9]*3;
    student_cgpa[1]=student_cgpa[1]/30;

    ///3rd student cgpa calculation
    student_cgpa[2]=0;
    student_cgpa[2]=student_cgpa[2]+student_course[2][0]*3;
    student_cgpa[2]=student_cgpa[2]+student_course[2][1]*3;
    student_cgpa[2]=student_cgpa[2]+student_course[2][2]*3;
    student_cgpa[2]=student_cgpa[2]+student_course[2][3]*3;
    student_cgpa[2]=student_cgpa[2]+student_course[2][4]*3;
    student_cgpa[2]=student_cgpa[2]+student_course[2][5]*3;
    student_cgpa[2]=student_cgpa[2]+student_course[2][6]*3;
    student_cgpa[2]=student_cgpa[2]+student_course[2][7]*3;
    student_cgpa[2]=student_cgpa[2]+student_course[2][8]*3;
    student_cgpa[2]=student_cgpa[2]+student_course[2][9]*3;
    student_cgpa[2]=student_cgpa[2]/30;

    ///4th student cgpa calculation
    student_cgpa[3]=0;
    student_cgpa[3]=student_cgpa[3]+student_course[3][0]*3;
    student_cgpa[3]=student_cgpa[3]+student_course[3][1]*3;
    student_cgpa[3]=student_cgpa[3]+student_course[3][2]*3;
    student_cgpa[3]=student_cgpa[3]+student_course[3][3]*3;
    student_cgpa[3]=student_cgpa[3]+student_course[3][4]*3;
    student_cgpa[3]=student_cgpa[3]+student_course[3][5]*3;
    student_cgpa[3]=student_cgpa[3]+student_course[3][6]*3;
    student_cgpa[3]=student_cgpa[3]+student_course[3][7]*3;
    student_cgpa[3]=student_cgpa[3]+student_course[3][8]*3;
    student_cgpa[3]=student_cgpa[3]+student_course[3][9]*3;
    student_cgpa[3]=student_cgpa[3]/30;

    ///5th student cgpa calculation
    student_cgpa[4]=0;
    student_cgpa[4]=student_cgpa[4]+student_course[4][0]*3;
    student_cgpa[4]=student_cgpa[4]+student_course[4][1]*3;
    student_cgpa[4]=student_cgpa[4]+student_course[4][2]*3;
    student_cgpa[4]=student_cgpa[4]+student_course[4][3]*3;
    student_cgpa[4]=student_cgpa[4]+student_course[4][4]*3;
    student_cgpa[4]=student_cgpa[4]+student_course[4][5]*3;
    student_cgpa[4]=student_cgpa[4]+student_course[4][6]*3;
    student_cgpa[4]=student_cgpa[4]+student_course[4][7]*3;
    student_cgpa[4]=student_cgpa[4]+student_course[4][8]*3;
    student_cgpa[4]=student_cgpa[4]+student_course[4][9]*3;
    student_cgpa[4]=student_cgpa[4]/30;

    ///6th student cgpa calculation
    student_cgpa[5]=0;
    student_cgpa[5]=student_cgpa[5]+student_course[5][0]*3;
    student_cgpa[5]=student_cgpa[5]+student_course[5][1]*3;
    student_cgpa[5]=student_cgpa[5]+student_course[5][2]*3;
    student_cgpa[5]=student_cgpa[5]+student_course[5][3]*3;
    student_cgpa[5]=student_cgpa[5]+student_course[5][4]*3;
    student_cgpa[5]=student_cgpa[5]+student_course[5][5]*3;
    student_cgpa[5]=student_cgpa[5]+student_course[5][6]*3;
    student_cgpa[5]=student_cgpa[5]+student_course[5][7]*3;
    student_cgpa[5]=student_cgpa[5]+student_course[5][8]*3;
    student_cgpa[5]=student_cgpa[5]+student_course[5][9]*3;
    student_cgpa[5]=student_cgpa[5]/30;

    ///7th student cgpa calculation
    student_cgpa[6]=0;
    student_cgpa[6]=student_cgpa[6]+student_course[6][0]*3;
    student_cgpa[6]=student_cgpa[6]+student_course[6][1]*3;
    student_cgpa[6]=student_cgpa[6]+student_course[6][2]*3;
    student_cgpa[6]=student_cgpa[6]+student_course[6][3]*3;
    student_cgpa[6]=student_cgpa[6]+student_course[6][4]*3;
    student_cgpa[6]=student_cgpa[6]+student_course[6][5]*3;
    student_cgpa[6]=student_cgpa[6]+student_course[6][6]*3;
    student_cgpa[6]=student_cgpa[6]+student_course[6][7]*3;
    student_cgpa[6]=student_cgpa[6]+student_course[6][8]*3;
    student_cgpa[6]=student_cgpa[6]+student_course[6][9]*3;
    student_cgpa[6]=student_cgpa[6]/30;

    ///8th student cgpa calculation
    student_cgpa[7]=0;
    student_cgpa[7]=student_cgpa[7]+student_course[7][0]*3;
    student_cgpa[7]=student_cgpa[7]+student_course[7][1]*3;
    student_cgpa[7]=student_cgpa[7]+student_course[7][2]*3;
    student_cgpa[7]=student_cgpa[7]+student_course[7][3]*3;
    student_cgpa[7]=student_cgpa[7]+student_course[7][4]*3;
    student_cgpa[7]=student_cgpa[7]+student_course[7][5]*3;
    student_cgpa[7]=student_cgpa[7]+student_course[7][6]*3;
    student_cgpa[7]=student_cgpa[7]+student_course[7][7]*3;
    student_cgpa[7]=student_cgpa[7]+student_course[7][8]*3;
    student_cgpa[7]=student_cgpa[7]+student_course[7][9]*3;
    student_cgpa[7]=student_cgpa[7]/30;

    ///9th student cgpa calculation
    student_cgpa[8]=0;
    student_cgpa[8]=student_cgpa[8]+student_course[8][0]*3;
    student_cgpa[8]=student_cgpa[8]+student_course[8][1]*3;
    student_cgpa[8]=student_cgpa[8]+student_course[8][2]*3;
    student_cgpa[8]=student_cgpa[8]+student_course[8][3]*3;
    student_cgpa[8]=student_cgpa[8]+student_course[8][4]*3;
    student_cgpa[8]=student_cgpa[8]+student_course[8][5]*3;
    student_cgpa[8]=student_cgpa[8]+student_course[8][6]*3;
    student_cgpa[8]=student_cgpa[8]+student_course[8][7]*3;
    student_cgpa[8]=student_cgpa[8]+student_course[8][8]*3;
    student_cgpa[8]=student_cgpa[8]+student_course[8][9]*3;
    student_cgpa[8]=student_cgpa[8]/30;

    ///10th student cgpa calculation
    student_cgpa[9]=0;
    student_cgpa[9]=student_cgpa[9]+student_course[9][0]*3;
    student_cgpa[9]=student_cgpa[9]+student_course[9][1]*3;
    student_cgpa[9]=student_cgpa[9]+student_course[9][2]*3;
    student_cgpa[9]=student_cgpa[9]+student_course[9][3]*3;
    student_cgpa[9]=student_cgpa[9]+student_course[9][4]*3;
    student_cgpa[9]=student_cgpa[9]+student_course[9][5]*3;
    student_cgpa[9]=student_cgpa[9]+student_course[9][6]*3;
    student_cgpa[9]=student_cgpa[9]+student_course[9][7]*3;
    student_cgpa[9]=student_cgpa[9]+student_course[9][8]*3;
    student_cgpa[9]=student_cgpa[9]+student_course[9][9]*3;
    student_cgpa[9]=student_cgpa[9]/30;

    ///printout 10 student cgpa with array and loop

    for(result=0; result<10; result++)
    {
        printf("%d Student CGPA is %.2f\n",result+1,student_cgpa[result]);
    }
    return 0;
}





