#include <stdio.h>
// including the math Library in C
#include <math.h>

int main()
{
    // Initiating the main three variabls of the "Quadratic Formula"
    float a, b, c;
    // Asking the user to enter the valuse of the three variabls (a , b and c)
    printf("Plz Enter The Values Of a , b and c\n");
    // Using scanf to tkae the values from the user
    scanf("%f  %f  %f", &a, &b, &c);
    // R1 ,R2 refers to the two root result of the formula
    float R1, R2;
    /*RP refers to the root part in the formula which is sqrt(b^2 - 4ac)
    and den refers to the denominator which is (2a)*/
    float RP, den;
    float UR = b * b - 4 * a * c;
    RP = sqrt(b * b - 4 * a * c);
    den = 2 * a;
    // if the values under the squt are larger than 0
    /*the resolved roots will be real but different in the value*/
    if (UR > 0)
    {
        R1 = (-b + RP) / den;
        R2 = (+b + RP) / den;
        printf(" Root1 = %.2f and Root2 = %.2f ", R1, R2);
    }
    // the result will be split in two identical but different in the sign
    /*the two roots will be real and equal to each other if the under root is equal to 0*/
    else if (UR == 0)
    {
        R1 = R2 = -b / den;
        printf("Root1 = Root2 = %.2f", R1);
    }
    else
    // in case the root was imagnary
    /*the roots will not be real*/
    {
        float r = -b / den;
        float i = RP / den;

        printf("Root1 = %.2f and Root2 = %.2f", r, i);
        printf("Math Error!!!!!  imagnary result\n");
    }
}