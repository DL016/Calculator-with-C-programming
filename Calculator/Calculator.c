#include<stdio.h>

int main()
{
    char operator;
    double first, second;

    printf("Select your operator (+,-,*,/):");
    scanf("%c",&operator);

    printf("Enter the numbers one by one: " );
    scanf("%lf %lf",&first,&second);

    switch(operator)
    {
    case '+' :
        printf("%.1lf + %.1lf = %.1lf\n",first,second,(first + second));
        break;

        case '-' :
        printf("%.1lf - %.1lf = %.1lf\n",first,second,(first - second));
        break;

        case '*' :
        printf("%.1lf * %.1lf = %.1lf\n",first,second,(first * second));
        break;

        case '/' :
            if( second != 0.0)
                printf("%.1lf / %.1lf = %.1lf\n",first,second,(first / second));
            else
                printf("Divide by zero situation");
        break;

        default:
            printf("Invalid operator entered. \n");

    }

    return 0;
}
