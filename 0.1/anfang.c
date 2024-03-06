#include <stdio.h>

int main() {
    // Ganzzahl (Integer)
    int alter = 30;
    printf("Das Alter beträgt: %d Jahre\n", alter);

    // Vorzeichenlose Ganzzahl (Unsigned Integer)
    unsigned int anzahl = 5;
    printf("Anzahl der Äpfel: %u\n", anzahl);

    // Gleitkommazahl (Double)
    double gewicht = 70.5;
    printf("Das Gewicht beträgt: %.2lf kg\n", gewicht);

    // Zeichen (Character)
    char geschlecht = 'M';
    printf("Das Geschlecht ist: %c\n", geschlecht);

    // Wahrheitswert (Boolean)
    _Bool istStudent = 1; // 1 für wahr, 0 für falsch
    printf("Ist der Benutzer ein Student? %s\n", istStudent ? "Ja" : "Nein");

    // Rechenoperationen
    int a = 10, b = 3;
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %.2lf\n", (double)a / b); // Beachte die Umwandlung zu Double

    return 0;
}
