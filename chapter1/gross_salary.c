#include <stdio.h>
int main()
{
    int bs, da, hra, grs;
    printf("Enter the basic salary:");
    scanf("%d", &bs);
    //printf("dearness allowance is %f\n", da);
    //scanf ("%f%f%f" ,  &da, &hra , &grs);
    da = (bs * 0.4);
    hra = (bs * 0.2);
    printf("dearness allowance is %d\n", da);
    printf("home rent allowance is %d\n", hra);
    grs = bs+da+hra;
    printf("Gross salary is %d\n", grs);
    return 0;
}