#include<stdio.h>
int main()
{
    int number,subject;

    ///*******this array for Grade points
    float student_course[20][20];

    ///******variable for calculate cgpa
    float student_cgpa[20];

    ///this variable for maximum to minimum cgpa
    float max1,max2,max3,max4,max5,max6,max7,max8,max9,max10;
    int location1,location2,location3,location4,location5,location6,location7,location8,location9,location10;

    ///this variable is for loop
    int student,course,calculation,result,counter,delet;

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

    ///1st maximum find
    max1=student_cgpa[0];
    for(counter=0;counter<number;counter++){
        if(student_cgpa[counter]>max1){
            max1=student_cgpa[counter];
            location1=counter+1;
        }
    }
    printf("Maximum cgpa is %d student = %.2f\n",location1,max1);

    ///2nd Maximum Find
    for(delet=location1;delet<number-1;delet++){
        student_cgpa[delet]=student_cgpa[delet+1];
    }
    max2=student_cgpa[0];
    for(counter=0;counter<number-1;counter++){
        if(student_cgpa[counter]>max2){
            max2=student_cgpa[counter];
            location2=counter+1;
        }
    }
    printf("2nd Maximum cgpa is %d Student = %.2f\n",location2,max1);

    ///3rd Maximum Find
    for(delet=location2;delet<number-2;delet++){
        student_cgpa[delet]=student_cgpa[delet+1];
    }
    max3=student_cgpa[0];
    for(counter=0;counter<number-2;counter++){
        if(student_cgpa[counter]>max3){
            max3=student_cgpa[counter];
            location3=counter+1;
        }
    }
    printf("3rd Maximum cgpa is %d Student = %.2f\n",location3,max3);

    ///4th Maximum Find
    for(delet=location3;delet<number-3;delet++){
        student_cgpa[delet]=student_cgpa[delet+1];
    }
    max4=student_cgpa[0];
    for(counter=0;counter<number-3;counter++){
        if(student_cgpa[counter]>max4){
            max4=student_cgpa[counter];
            location4=counter+1;
        }
    }
    printf("4th Maximum cgpa is %d Student = %.2f\n",location4,max4);

    ///5th Maximum Find
    for(delet=location4;delet<number-4;delet++){
        student_cgpa[delet]=student_cgpa[delet+1];
    }
    max5=student_cgpa[0];
    for(counter=0;counter<number-1;counter++){
        if(student_cgpa[counter]>max5){
            max5=student_cgpa[counter];
            location5=counter+1;
        }
    }
    printf("5th Maximum cgpa is %d Student = %.2f\n",location5,max5);

    ///6th Maximum Find
    for(delet=location5;delet<number-5;delet++){
        student_cgpa[delet]=student_cgpa[delet+1];
    }
    max6=student_cgpa[0];
    for(counter=0;counter<number-5;counter++){
        if(student_cgpa[counter]>max6){
            max6=student_cgpa[counter];
            location6=counter+1;
        }
    }
    printf("6th Maximum cgpa is %d Student = %.2f\n",location6,max6);

    ///7th Maximum Find
    for(delet=location6;delet<number-6;delet++){
        student_cgpa[delet]=student_cgpa[delet+1];
    }
    max7=student_cgpa[0];
    for(counter=0;counter<number-6;counter++){
        if(student_cgpa[counter]>max7){
            max7=student_cgpa[counter];
            location7=counter+1;
        }
    }
    printf("7th Maximum cgpa is %d Student = %.2f\n",location7,max7);

    ///8th Maximum Find
    for(delet=location7;delet<number-7;delet++){
        student_cgpa[delet]=student_cgpa[delet+1];
    }
    max8=student_cgpa[0];
    for(counter=0;counter<number-7;counter++){
        if(student_cgpa[counter]>max8){
            max8=student_cgpa[counter];
            location8=counter+1;
        }
    }
    printf("8th Maximum cgpa is %d Student = %.2f\n",location8,max8);

    ///9th Maximum Find
    for(delet=location8;delet<number-8;delet++){
        student_cgpa[delet]=student_cgpa[delet+1];
    }
    max9=student_cgpa[0];
    for(counter=0;counter<number-8;counter++){
        if(student_cgpa[counter]>max9){
            max9=student_cgpa[counter];
            location9=counter+1;
        }
    }
    printf("9th Maximum cgpa is %d Student = %.2f\n",location9,max9);

    ///10th Maximum Find
    for(delet=location9;delet<number-9;delet++){
        student_cgpa[delet]=student_cgpa[delet+1];
    }
    max10=student_cgpa[0];
    for(counter=0;counter<number-9;counter++){
        if(student_cgpa[counter]>max10){
            max10=student_cgpa[counter];
            location10=counter+1;
        }
    }
    printf("10th Maximum cgpa is %d Student = %.2f\n",location10,max10);
    return 0;
}
