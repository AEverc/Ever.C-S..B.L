#include <stdio.h>
int main()
{
    int g;
    //Asking the user to enter there grade
    printf("Plz Enter Your Grade\n");
    //using scanf to take the value of the grade from the user
    scanf("%i", &g);
    //checking if the grade is in the range if 100:90 if true the grade will be (A)
    if (g <= 100 && g >= 90)
    {
        printf("Your Grad is : A\n");
    }
    //if not then checking if the grade is in the range if 90:80 if true the grade will be (B)
    else if (g >= 80 && g <= 90)
    {
        printf("Your Grad is : B\n");
    }
    //if not then checking if the grade is in the range if 80:70 if true the grade will be (C)
    else if (g >= 70 && g <= 80)
    {
        printf("Your Grad is : C\n");
    }
    //if not then checking if the grade is in the range if 70:60 if true the grade will be (D)
    else if (g >= 60 && g <= 70)
    {
        printf("Your Grad is : D\n");
    }
    //if not then checking if the grade is in the range if 59:0 if true the grade will be (F)
    else if (g < 60)
    {
        printf("Your Grad is : F\n");
    }
}