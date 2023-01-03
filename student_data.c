#include<stdio.h>

struct student{
    int roll_no;
    float cgpa;
    char name[100];
};

int main(){
 
 struct student s1,s2;

 printf("enter the name ,roll no & cgpa of student s1 : ");
 scanf("%s%d%f" , s1.name ,&s1.roll_no, &s1.cgpa );
 
 printf("enter the name ,roll no & cgpa of student s2 : ");
 scanf("%s%d%f" , s2.name ,&s2.roll_no, &s2.cgpa );

 printf("student s1 name: %s\n roll_no : %d\n cgpa  : %0.2f" , s1.name,s1.roll_no,s1.cgpa );
 printf("student s2 name:%s\n  roll_no :%d\n cgpa  : %0.2f" , s2.name,s2.roll_no,s2.cgpa );

 return 0;

}