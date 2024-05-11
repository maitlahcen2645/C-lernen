#include <stdio.h>
#include <stdlib.h>
#include <time.h> // Include this header for srand() function

// Wurde erstellt am 24.04.2024 :)
int main()
{
    srand(time(NULL));
    int i = 0;
    int sum = 0;
    int max = 10.00;
    int min = 1.00;

    printf("Maximalzahl: ");
    scanf("%d", &max);
    printf("\nMinimalzahl: ");
    scanf("%d", &min);

    //int max = 10.00;
    //int min = 1.00;


    float zufallszahlen[10];

    for(i = 0; i < 10; i++)
        {
            zufallszahlen[i] = min + rand() % (max - min + 1);
            sum += zufallszahlen[i];
        }

    printf("%d", sum);    
    return 0;

}