

#include <stdio.h>

int main()
{
    int age;
    char sex;


    printf("inserisci la tua età: ");
    scanf("%d", &age);
    printf("Inserisci il tuo sesso: \nM (Maschio) | F (Femmina): ");
    scanf(" %c", &sex);
    printf("hai %d anni e hai inserito %c\n", age, sex);
}