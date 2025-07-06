#include <stdio.h>
int main()
{
    float fahr, cent;
    printf("\nEnter temperature in Fahrenheit: ");
    scanf("%f", &fahr);
    cent = (fahr - 32) * 5 / 9;
    printf("Temperature in centigrade: %f", cent);
    return 0;

}