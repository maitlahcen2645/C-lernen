#include <stdio.h>
#include <stdlib.h>

int parallel()
{
    int anzahl;
    int temp;
    int *wider;
    int u;
    float strom;

    printf("Wie viele Widerstaende brauchst du chef?: ");
    scanf("%d", &anzahl);

    // Speicher für das Array zuweisen
    wider = (int*) malloc(anzahl * sizeof(int));

    printf("Spannung?: ");
    scanf("%d", &u);

    for(int i = 0; i < anzahl; i++)
    {
        printf("Wie hoch soll der Widerstand %d sein: ", i);
        scanf("%d", &temp);
        
        wider[i] = temp;
    }

    for(int i = 0; i < anzahl; i++)
    {
        strom =  (float)u / wider[i];
        printf("Der Strom für den Wiederstand %d ist %.6f\n", i, strom);
    }    

    // Speicher freigeben
    free(wider);
    
    return 0;
}

int main ()
{
    parallel();
    return 0;
}
