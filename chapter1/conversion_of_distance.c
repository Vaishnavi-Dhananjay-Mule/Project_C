#include <stdio.h>;
int main()
    {
        float km,m,cm,inch,ft;
        printf("\nEnter the distance in kilometers:");
        scanf("%f",&km);
        m = km*1000;
        cm = m*100;
        inch = cm/2.54;
        ft = inch/12;
        printf("\nDistane in meters is %f",m);
         printf("\nDistane in centimeters is %f",cm);
          printf("\nDistane in inch is %f",inch);
        printf("\nDistane in feet is %f",ft);
        return 0;

    }
