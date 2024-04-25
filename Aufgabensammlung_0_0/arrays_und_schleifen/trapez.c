#include <stdio.h>
#include <stdlib.h>

// Wurde erstellt am 24.04.2024 :)

void mach_leer(int a)
{
    for (int i = 0; i < a; i++)
    {
        printf(" ");
    }
}

void mach_stern(int a)
{
    for (int i = 0; i < a; i++)
    {
        printf("*");
    }
}

int main()
{   
    int zeilen = 5;
    for (int i = 0; i < zeilen; i++)
    {
        mach_leer(zeilen - i - 1);
        mach_stern(2 * i + 1);
        printf("\n");
    }
    return 0;
}
