#include<stdio.h>
#include<string.h>

struct student{
 

 int roll_no;
 float cgpa;
 char name[100];
};

int main(){

 struct student s1 ;

s1.roll_no = 2111140;
s1.cgpa = 7.67;

strcpy(s1.name,"Saquib shadab");

printf("student name : %s\n" , s1.name);
printf("student roll_no : %d\n" , s1.roll_no);
printf("student name : %0.2f\n" , s1.cgpa);

return 0;
}

