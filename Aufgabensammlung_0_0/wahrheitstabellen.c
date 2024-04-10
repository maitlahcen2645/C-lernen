#include <stdio.h>

int main ()
{
    // Wahrheitstabelle für UND-Verknüpfung
    printf("UND-Verknüpfung:\n");
    printf("0 UND 0 = %d\n", 0 && 0);
    printf("0 UND 1 = %d\n", 0 && 1);
    printf("1 UND 0 = %d\n", 1 && 0);
    printf("1 UND 1 = %d\n", 1 && 1);

    // Wahrheitstabelle für ODER-Verknüpfung
    printf("ODER-Verknüpfung:\n");
    printf("0 ODER 0 = %d\n", 0 || 0);
    printf("0 ODER 1 = %d\n", 0 || 1);
    printf("1 ODER 0 = %d\n", 1 || 0);
    printf("1 ODER 1 = %d\n", 1 || 1);

    // Wahrheitstabelle für NICHT-Verknüpfung
    printf("NICHT-Verknüpfung:\n");
    printf("NICHT 0 = %d\n", !0);
    printf("NICHT 1 = %d\n", !1);

    // ein und mit einem niegierten eingang
    printf("Ein UND NICHT 0 = %d\n", 1 && !0);

    // ein und mit einem niegierten a eingang und eines mit einem niegierten b eingang sind verbunden mit einem oder 
    printf("Die schaltung da:\n");
    printf("0 0 = %d\n", 0 && !0 || !0 && 0);
    printf("0 1 = %d\n", 0 && !1 || !1 && 0);
    printf("1 0 = %d\n", 0 && !1 || !0 && 1);
    printf("1 1 = %d\n", 1 && !1 || !1 && 1);


    return 0;
}