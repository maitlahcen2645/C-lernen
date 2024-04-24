#include <stdio.h>
#include <stdlib.h>
// Wurde erstellt am 24.04.2024 :)
int main()
{
    int i = 0;
    int f = 0;

    for(i = 0; i < 7; i++)
    {
        for(f = -3; f < i; f++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}