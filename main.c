#include <stdio.h>
char getGrade(int mark){
if(mark>=70&&mark<=100)return'A';
else if(mark>=60)return'B';
else if(mark>=50)return'C';
else if(mark>=40)return'D';
else return 'F';
}
int main(){
    int marks[10];
    int passCount=0, failCount=0;
    int i;
    printf("===STUDENT GRADING SYSTEM===\n");

    //4.LOOPING-Process 10 students
    for(i=0;i,10;i++){
printf("\nEnter avarage mark for student%d(0-100):",i+1);
scanf("%d",&marks[i]);

//validateinput
if(marks[i]<0||marks[i]>100){
    printf("invalid mark!Enter0-100.\n");
    i--;//repeat same student
    continue;
}
char grade= getGrade(marks[i]);

//check pass/fail
if(marks[i]>=40){
    printf("PASS\n");
    
}else{
printf("(FAIL)\n");

    }
        
printf("grade : %c",grade);
}
    // Final summary
    printf("\n---SUMMARY---\n");
    printf("Total passed;%d\n",passCount);
    printf("Total Failed:%d\n",failCount);
    return 0;
}
