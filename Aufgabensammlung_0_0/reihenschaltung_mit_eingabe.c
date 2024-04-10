#include <stdio.h>

int main(){
    printf("Bitte geben Sie die Widerstände R1, R2 und R3 sowie die Spannung U ein:\n");
    int r1 = (scanf("%d", &r1));
    int r2 = (scanf("%d", &r2));
    int r3 = (scanf("%d", &r3)) ;
    int u =  (scanf("%d", &u));
    int rges = r1 + r2 + r3;
    float i = u / (float)rges;
    printf("Der Gesamtwiderstand beträgt: %d Ohm\n", rges);
    printf("Der Strom beträgt: %.6f A\n", i);
    float u1 = i * (float)r1;
    float u2 = i * (float)r2;
    float u3 = i * (float)r3;
    printf("Die Spannung an R1 beträgt: %.6f V\n", u1);
    printf("Die Spannung an R2 beträgt: %.6f V\n", u2);
    printf("Die Spannung an R3 beträgt: %.6f V\n", u3);
    return 0;

}