#include <stdio.h>

int main()
{
    int a;
    unsigned int b;
    float c;
    double d;

    //Anweisung in Konsole ausgeben
    printf("Please enter a value for variable a: ");
    //Wert von Bediner einlesen
    scanf("%d", &a);

    printf("Please enter a value for variable b: ");
    scanf("%d", &b);

    printf("Please enter a value for variable c: ");
    scanf("%f", &c);

    printf("Please enter a value for variable d: ");
    scanf("%f", &d);

    printf("The value of variable a is: %d\n", a);
    printf("The value of variable b is: %u\n", b);
    printf("The value of variable c is: %f\n", c);
    printf("The value of variable d is: %f\n", d);

    return 0;
}
