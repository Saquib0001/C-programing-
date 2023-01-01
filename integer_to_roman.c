
/******************************************************
 Program to convert a integer number to roman numerals
 * 
 * Enter a number: 2023
 * Roman numerals: mmxxiii
 * 
 ******************************************************/
// for example how code work for 2023

// num == number
//  num = num - 10 --->  num -= 10

#include <stdio.h> 

int main() 
{   
    int num ;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Roman numerals: ");        

    while(num != 0)
    {

        if (num >= 1000)   // 2000 ==  step 1&2 --> 2 times for 1000 print from here   1000 - m 
        {
           printf("m");
           num -= 1000;
        }

        else if (num >= 900)   // 900 -  cm
        {
           printf("cm");
           num =  num - 900;
        }        

        else if (num >= 500)   // 500 - d
        {           
           printf("d");
           num -= 500;
        }

        else if (num >= 400)   // 400 -  cd
        {
           printf("cd");
           num -= 400;
        }

        else if (num >= 100)   // 100 - c
        {
           printf("c");
           num -= 100;                       
        }

        else if (num >= 90)    // 90 - xc
        {
           printf("xc");
           num -= 90;                                              
        }

        else if (num >= 50)    // 50 - l
        {
           printf("l");
           num -= 50;                                                                     
        }

        else if (num >= 40)    // 40 - xl
        {
           printf("xl");           
           num -= 40;
        }

        else if (num >= 10)  // 20  --> step 3 & 4 from print here two time     10 - x
        {
           printf("x");
           num -= 10;           
        }

        else if (num >= 9)     // 9 - ix
        {
           printf("ix");
           num -= 9;                         
        }

        else if (num >= 5)     // 5 - v
        {
           printf("v");
           num -= 5;                                     
        }

        else if (num >= 4)     // 4 - iv
        {
           printf("iv");
           num -= 4;                                                            
        }

        else if (num >= 1)    // 3 =  and in this step three time print from here  1 - i
        {
           printf("i");
           num -= 1;                                                                                   
        }

    }

    return 0;
}
