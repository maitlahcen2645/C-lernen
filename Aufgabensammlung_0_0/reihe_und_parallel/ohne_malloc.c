#include <stdio.h>

int parallel()
{
    int anzahl;
    int temp;
    int u;
    float strom;

    printf("Wie viele Widerstaende brauchst du chef?: ");
    scanf("%d", &anzahl);

    // Array deklarieren
    int wider[anzahl];

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

    return 0;
}


int reihe()
{
    int anzahl;
    int temp;
    int u;
    int rges = 0;
    float ut;
    float strom;


    printf("Wie viele Widerstaende brauchst du chef?: ");
    scanf("%d", &anzahl);

    // Array deklarieren
    int wider[anzahl];

    printf("Spannung?: ");
    scanf("%d", &u);

    for(int i = 0; i < anzahl; i++)
    {
        printf("Wie hoch soll der Widerstand %d sein: ", i);
        scanf("%d", &temp);
        
        wider[i] = temp;
        rges = rges + temp;

    }
    
    strom = (float)u / (float)rges;



    for(int i = 0; i < anzahl; i++)
    {
        ut =  (float)strom * wider[i];
        printf("Die Spannung für den Wiederstand %d ist %.6f\n", i, ut);
    }    

    return 0;
}
int main ()
{
    //parallel();
    reihe();
    return 0;
}
