#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ARRAY_GROESSE 10

// Funktionsprototypen
void begruesseSpieler()
{
    printf("MOIN MOIN\nGeb bitte nachfolgenden die zahlen ein\n");
}

void generiereZufallszahlen(int zahlenArray[], int groesse)
{
    for (int i = 0; i < groesse; i++)
    {
        zahlenArray[i] = ((rand() % 20)+1) ;
    }
    
}

void zeigeZahlenArray(int zahlenArray[], int groesse)
{
    for (int i = 0; i < groesse; i++)
    {
        printf("%d ", zahlenArray[i]);
    }

    printf("\n");
    
}


int leseSpielerEingabe()
{
    int eingabe;
    scanf("%d", &eingabe);
    return eingabe;
}


void pruefeZahl(int gerateneZahl, int zahlenArray[], int groesse, int *versuche)
{

    if (gerateneZahl == zahlenArray[0])
    {
        printf("Die geratene Zahl ist richtig!\n");
        return;
    }

    else if (gerateneZahl < zahlenArray[0])
    {
        printf("Die geratene Zahl ist größer als die richtige!\n");

    }

    else if (gerateneZahl > zahlenArray[0])
    {
        printf("Die geratene Zahl ist kleiner als die richtige!\n");

    }
}

void gratuliere(int versuche)
{
    printf("Herzlichen Glückwunsch du hast es mit %d versuchen Geschaft du bist ganz besonders \n", versuche);
}


int berechneMax(int zahlenArray[], int groesse)
{
    int h;

    for (int i = 0; i < groesse; i++)
    {
        if(zahlenArray[i] > h || i == 0)
        {
            h = zahlenArray[i];
        }
    }

    return h;
}


int berechneMin(int zahlenArray[], int groesse)
{
    int h;

    for (int i = 0; i < groesse; i++)
    {
        if(zahlenArray[i] < h || i == 0)
        {
            h = zahlenArray[i];
        }
    }

    return h;
}

int berechneSumme(int zahlenArray[], int groesse)
{
    int h = 0;
    for (int i = 0; i < groesse; i++)
    {
        h = h + zahlenArray[i];
    }

    return h;

}

float berechneDurchschnitt(int zahlenArray[], int groesse)
{
    int h = 0;
    for (int i = 0; i < groesse; i++)
    {
        h = h + zahlenArray[i];
    }

    h = (float)h / groesse;

    return h;
}

int main() {
int zahlenArray[ARRAY_GROESSE];
int gerateneZahl = 0;
int versuche = 0;
srand(time(0)); // Initialisiere den Zufallsgenerator
begruesseSpieler();
generiereZufallszahlen(zahlenArray, ARRAY_GROESSE);
for (versuche = 1; ; versuche++) { //keine Abbruchbedingung = Endlosschleife
gerateneZahl = leseSpielerEingabe();
pruefeZahl(gerateneZahl, zahlenArray, ARRAY_GROESSE, &versuche);
if (gerateneZahl == zahlenArray[0]) {
break; //beendet Schleife, wenn Zahl erraten
}
}
gratuliere(versuche);
zeigeZahlenArray(zahlenArray, ARRAY_GROESSE);
int max = berechneMax(zahlenArray, ARRAY_GROESSE);
int min = berechneMin(zahlenArray, ARRAY_GROESSE);
int summe = berechneSumme(zahlenArray, ARRAY_GROESSE);
float durchschnitt = berechneDurchschnitt(zahlenArray, ARRAY_GROESSE);
printf("Maximum: %d\n", max);
printf("Minimum: %d\n", min);
printf("Summe: %d\n", summe);
printf("Durchschnitt: %.2f\n", durchschnitt);
return 0;
}