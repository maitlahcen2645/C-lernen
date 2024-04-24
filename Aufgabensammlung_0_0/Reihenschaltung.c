#include <stdio.h>

int main()
{
    int r1 = 100;
    int r2 = 50;
    int r3 = 75;
    int u = 12;
    int rges = r1 + r2 + r3;
    float i = u / (float)rges;
    printf("Der Gesamtwiderstand betraegt: %d Ohm\n", rges);
    printf("Der Strom beträgt: %.6f A\n", i);
    float u1 = i * (float)r1;
    float u2 = i * (float)r2;
    float u3 = i * (float)r3;
    printf("Die Spannung an R1 beträgt: %.6f V\n", u1);
    printf("Die Spannung an R2 beträgt: %.6f V\n", u2);
    printf("Die Spannung an R3 beträgt: %.6f V\n", u3);
    return 0;

}