#include <stdio.h>
// Funktionsprototypen
// 29.05.2024
int pruefeBuecherAnzahl(int *arry)
{

    int summe = 0;

    for (int i = 0; i < 5; i++)
    {
        summe = summe + arry[i];
    }
    
    return summe;

}


int main() {
int lager[5] = {3, 6, 0, 2, 4};
int gesamtAnzahlBuecher = pruefeBuecherAnzahl(lager);
printf("Willkommen im Buchverwaltungssystem!\n");
printf("Gesamtanzahl der Bücher im Lager: %d\n", gesamtAnzahlBuecher);
if (gesamtAnzahlBuecher == 0) {
printf("Das Lager ist leer. Bitte bestellen Sie neue Bücher.\n");
} else if (gesamtAnzahlBuecher < 5) {
printf("Das Lager muss aufgefüllt werden. Es fehlen noch Bücher.\n");
} else {
printf("Das Lager ist gut gefüllt. Viel Spaß beim Verkauf der Bücher!\n");
}
return 0;
}

