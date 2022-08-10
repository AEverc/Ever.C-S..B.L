#include <stdio.h>
int main()
{
    int x;

    int y;

    char op;
    // Asking the user to enter the 1st number
    printf(" Plz Enter The 1st No\n");
    // Using scanf to take the value of the 1st number
    scanf("%i", &x);
    printf(" Plz Choose An Opertation\n");
    // Asking the user to choose a opertation
    printf("Ur Choice can be : + , - , * , / And %%  \n");
    // Using scanf to take the choosen operator
    scanf("%s", &op);
    // Asking the user to enter the 2nd number
    printf(" Plz Enter The 2nd No\n");
    // Using scanf to take the value of the 2nd number
    scanf("%i", &y);
    // checking the choosen operator in a if else conditions
    // if the choosen operator is (+) then execute :
    if (op == '+')
    {

        printf("The Opertation U Have Choosen Is Addition & The Result = %i ", x + y);
    }
    // if not then checking if it is (-) then execute :
    else if (op == '-')
    {
        printf("The Operation U Have Choosen Is Subtraction & The Result = %i ", x - y);
    }
    // if not then checking if it is (*) then execute :
    else if (op == '*')
    {

        printf("The Operation U Have Choosen Is Multiplication & The Result = %i ", x * y);
    }
    // if not then cheking if it is (/) then execute :
    else if (op == '/')
    {

        double r = x / y;
        printf("The Operation U Have Choosen Is Division & The Result = %f", r);
    }
    // if not then chenking if it is (%) then execute :
    else if (op == '%')
    {
        printf("The Operation U Have Choosen Is Mod & The Result = %i", x % y);
    }
}