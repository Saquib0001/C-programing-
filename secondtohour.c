#include <stdio.h>

void clock(int seconds){
     int  hours, minutes, Time;
    

    hours = (seconds / 3600);

    minutes = (seconds - (3600 / hours)) / 60;

    Time = (seconds - (3600 * hours) - (minutes * 60));

    printf("hours : minutes : seconds -->> %d :%d  : %d ", hours, minutes, Time);


    return 0;

}

int main()
{

    clock(3640);//call by function

    return 0;
}
