#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
//Creating functions for the various operations
//Addition function
float addition(float x, float y)
{
    float z;
    z=x+y;
    return z;
}
//Subtraction function
float subraction(float x,float y)
{
    float z;
    z=x-y;
    return z;
}
//Product function
float multiplication(float x, float y)
{
    float z;
    z=x*y;
    return z;
}
//Division function
float division (float x, float y)
{
    float z;
    z=x/y;
    return z;
}
//Creating functions for the scientific functions
//Power function
float power(float x,float y)
{
    float z;
    z=pow(x,y);
    return z;
}
//Square-root function
float squareroot(float x)
{
    float z;
    z=sqrt(x);
    return z;
}
//Sine function
float sine(float x)
{
    float z;
    z=sin(x);
    return z;
}
//Cosine function
float cosine (float x)
{
    float z;
    z=cos(x);
    return z;
}
//Tangent function
float tangent (float x)
{
    float z;
    z=tan(x);
    return z;
}
//Natural logarithm function
float natlog (float x)
{
    float z;
    z=log(x);
    return z;
}
//Logarithm function
float logarithm (float x)
{
    float z;
    z=log10(x);
    return z;
}
//Exponential function
float exponentional(float x)
{
    float z;
    z=exp(x);
    return z;
}
//Factorial function
long factorial (float x)
{
    float z;
    long result = 1;
    for (z=1;z<=x;z++)
        result=result*z;
    return result;
}
//Creating functions for length conversion
//Centimeter to meter conversion
float cm_m(float x)
{
    float z;
    z=x/100;
    return z;
}
//Centimeter to kilometer conversion
float cm_km(float x)
{
    float z;
    z=x/100000;
    return z;
}
//Meter to centimeter conversion
float m_cm(float x)
{
    float z;
    z=x*100;
    return z;
}
//Meter to kilometer conversion
float m_km(float x)
{
    float z;
    z=x/1000;
    return z;
}
//Kilometer to meter conversion
float km_m(float x)
{
    float z;
    z=x*1000;
    return z;
}
//Kilometer to centimeter conversion
float km_cm(float x)
{
    float z;
    z=x*100000;
    return z;
}
//Initializing the main program
int main()
{
    //Creating the program variables
    float a,b;
    unsigned pick1,pick2,pick3;
    int i=0,n;
    double *storage;
    storage=(double*)malloc(sizeof(double));
    printf("Press enter to begin");
    //Clearing the welcome message
    getche();

        nisaidie:
     //Requesting the user to pick an operation to deal with
    printf("Please pick what what operation you'd like to work with\n");
    printf("Press: \n");
    printf("[1] for Addition \n");
    printf("[2] for Subtraction \n");
    printf("[3] for Multiplication \n");
    printf("[4] for Division \n");
    printf("[5] for Scientific Functions \n");
    printf("[6] for Conversion between Km, m and cm \n");
    printf("[7] for List of Previous Results \n");
    printf("[E] to Exit \n");

    //To erase the choice of the user and go straight to the operation
    scanf("%d",&pick1);

     {
    //Creating the exit option

    if((pick1=='e')||(pick1=='E'))
    {
        printf("\nThank you for your time. Goodbye :)\n\n");
        goto nimesare;
        getche();
        exit (0);
    }

    //Start of the first 4 basic operations
    if (pick1<5)
    {
        //The various switch options depending on what the user chooses
        switch(pick1)
        {
        //If choice 1(Addition) is picked
        case 1:
            {
                printf("Beautiful choice.\nPlease enter the two numbers you would like to add, pressing enter after each number\n");
                scanf("%f %f", &a, &b);
                printf("The sum of %f and %f is: %f\n\n", a, b, addition(a,b));
                storage[i]=addition(a,b);
                i++;
                goto nisaidie;

                break;
            }
        //If choice 2(Subtraction) is picked
        case 2:
            {
                printf("Nice choice.\nPLease enter the two numbers you would like to subtract, pressing enter after each number\n");
                scanf("%f %f", &a, &b);
                printf("The difference of %f and %f is: %f\n\n", a, b, subraction(a,b));
                storage[i]=subraction(a,b);
                i++;
                goto nisaidie;
                break;

            }
        //If choice 3(Product) is picked
        case 3:
            {
                printf("Good choice.\nPLease enter the two numbers you would like to multiply, pressing enter after each number\n");
                scanf("%f %f", &a, &b);
                printf("The product of %f and %f is: %f\n\n", a, b, multiplication(a,b));
                storage[i]=multiplication(a,b);
                i++;
                goto nisaidie;
                break;

            }
        //If choice 4(Quotient) is picked
        case 4:
            {
                printf("Amazing choice.\nPLease enter the two numbers you would like to divide, pressing enter after each number\n");
                scanf("%f %f", &a, &b);
                if (b==0)
                    printf("We cannot perform this operation. Please check back in 3-5 business days.\n\n");
                else
                    printf("The quotient of %f and %f is: %f\n\n", a, b, division(a,b));

                storage[i]=division(a,b);
                i++;
                goto nisaidie;
                break;
                exit (0);
            }
        }
    getche();
    exit(0);
    }
    }
    //Creating the line of code for the Scientific operations
    {
    //If choice 5(Scientific operations) is picked
    if (pick1==5)
    {

      //Creating a menu for the scientific operations
      {
        printf("\nWell things just got interesting :) \n");
        printf("Scientific Function \n");
        printf("Press \n");
        printf("[1] for power of x \n");
        printf("[2] for square-root of x \n");
        printf("[3] for sine of x \n");
        printf("[4] for cosine of x \n");
        printf("[5] for tangent of x \n");
        printf("[6] for ln of x \n");
        printf("[7] for exponent of \n");
        printf("[8] for factorial of x \n");
        printf("[9] for logarithm of x \n");
        printf("[E] to Exit \n");
        scanf("%d",&pick2);

      }
    //CReating the exit option
    if((pick2=='e')||(pick2=='E'))
    {
        printf("\nThank you for your time. Goodbye :)\n\n");
        goto nimesare;
        exit(0);
    }
    //The various switch options based of the second pick
    switch(pick2)
    {
    //If option 1(Power) is picked
    case 1:
        {
            printf("Beautiful choice.\nPlease enter the base and the exponent\n");
            scanf("%f %f", &a, &b);
            printf("%f power %f is %f\n\n", a, b, power(a,b));
            storage[i]=power(a,b);
            i++;
            goto nisaidie;
            break;
            exit(0);
        }
    //If option 2(Square-root) is picked
    case 2:
        {
            printf("Nice choice.\nPlease enter the number you would like to get the square-root of\n");
            scanf("%f", &a);
            printf("The square-root of %f is: %f\n\n",squareroot(a));
            storage[i]=squareroot(a);
            i++;
            goto nisaidie;
            break;
            exit (0);
        }
    //If option 3 (sine) is picked
    case 3:
        {
            printf("Good choice.\nPlease enter the angle in radians you would like to find the sine of\n");
            scanf("%f", &a);
            printf("The sine of %f is: %f\n\n", a ,sine(a));
            storage[i]=sine(a);
            i++;
            goto nisaidie;
            break;
            exit (0);
        }
    //If option 4 (cosine) is picked
    case 4:
        {
            printf("Amazing choice.\nPlease enter the angle in radians you would like to find the cosine of\n");
            scanf("%f", &a);
            printf("The cosine of %f is: %f\n\n", a,cosine(a));
            storage[i]=cosine(a);
            i++;
            goto nisaidie;
            break;
            exit (0);
        }
    //If option 5 (tangent) is picked
    case 5:
        {
            printf("Splendid choice.\nPlease enter the angle in radians you would like to find the tangent of\n");
            scanf("%f", &a);
            printf("The tangent of %f is: %f\n\n", a, tangent(a));
            storage[i]=tangent(a);
            i++;
            goto nisaidie;
            break;
            exit (0);
        }
    //If option 6 (ln) is picked
    case 6:
        {
            printf("Great choice.\nPlease enter the number you would like to find the natural logarithm of\n");
            scanf("%f", &a);
            printf("The ln of %f is: %f\n\n", a, natlog(a));
            storage[i]=natlog(a);
            i++;
            goto nisaidie;
            break;
            exit (0);
        }
    //If option 7 (exponential) is fixed
    case 7:
        {
            printf("Superb choice.\nPlease enter the number you would like to find the exponential power of\n");
            scanf("%f", &a);
            printf("The exponential power of %f is: %f\n\n", a, exponentional(a));
            storage[i]=exponentional(a);
            i++;
            goto nisaidie;
            break;
            exit (0);
        }
    //If option 8 (Factorial) is picked
    case 8:
        {
            printf("Lovely choice.\nPlease enter the number you would like to find the factorial of\n");
            scanf("%f", &a);
            printf("The factorial of %f is: %f\n\n", a, factorial(a));
            storage[i]=factorial(a);
            i++;
            goto nisaidie;
            break;
            exit (0);
        }
    //If option 9 (logarithm) is picked
    case 9:
        {
            printf("Fine choice.\nPlease enter the number you want to find the logarithm of\n");
            scanf("%f", &a);
            printf("The log base 10 of %f is: %f\n\n", a, logarithm(a));
            storage[i]=logarithm(a);
            i++;
            goto nisaidie;
            break;
            exit (0);
        }
    }
    getche();
    exit(0);
    }
    }
    {
    if (pick1==6)
    {
        //Creating a menu for the length conversion
        {
        printf("\nGlad to have you here :) \n");
        printf("Length conversion \n");
        printf("Press \n");
        printf("[1] for cm to m \n");
        printf("[2] for cm to km \n");
        printf("[3] for m to cm \n");
        printf("[4] for m to km \n");
        printf("[5] for km to m \n");
        printf("[6] for km to cm \n");
        printf("[E] to Exit \n");
        scanf("%d",&pick3);

        }

    //Creating the exit option
    if((pick3=='e')||(pick3=='E'))
    {
        printf("\nThank you for your time. Goodbye :)\n\n");
        goto nimesare;
        exit(0);
    }
    //The various switch options based of the second pick
    switch (pick3)
    {
    case 1:
        {
            printf("Beautiful choice.\nPlease enter the length in cm you would like to convert to m\n");
            scanf("%f", &a);
            printf("The value of %f in meters is: %f\n\n", a, cm_m(a));
            storage[i]=cm_m(a);
            i++;
            goto nisaidie;
            break;
            exit (0);
        }
    case 2:
        {
            printf("Nice choice.\nPlease enter the length in cm you would like to convert to km\n");
            scanf("%f", &a);
            printf("The value of %f in kilometers is: %f\n\n", a, cm_km(a));
            storage[i]=cm_km(a);
            i++;
            goto nisaidie;
            break;
            exit (0);
        }
    case 3:
        {
            printf("Good choice.\nPlease enter the length in m you would like to convert to cm\n");
            scanf("%f", &a);
            printf("The value of %f in centimeters is: %f\n\n", a, m_cm(a));
            storage[i]=m_cm(a);
            i++;
            goto nisaidie;
            break;
            exit (0);
        }
    case 4:
        {
            printf("Amazing choice.\nPlease enter the length in m you would like to convert to km\n");
            scanf("%f", &a);
            printf("The value of %f in kilometers is: %f\n\n", a, m_km(a));
            storage[i]=m_km(a);
            i++;
            goto nisaidie;
            break;
            exit (0);
        }
    case 5:
        {
            printf("Splendid choice.\nPlease enter the length in km you would like to convert to m\n");
            scanf("%f", &a);
            printf("The value of %f in meters is: %f\n\n", a, km_m(a));
            storage[i]=km_m(a);
            i++;
            goto nisaidie;
            break;
            exit (0);
        }
    case 6:
        {
            printf("Great choice.\nPlease enter the length in km you would like to convert to cm\n");
            scanf("%f", &a);
            printf("The value of %f in meters is: %f\n\n", a, km_cm(a));
            storage[i]=km_cm(a);
            i++;
            goto nisaidie;
            break;
            exit (0);
        }
    }
    getche();
    exit(0);
    }
    }
if (pick1==7)
    {
          printf("\n\n");
          for (n=0;n<i;n++)
          printf("[%d] <-> %f\n", (n+1), storage[n]);
          printf("\n\nThank you for your time. Come back again for more calculations. Kwaheri.\n\n");
          exit(0);
    }
nimesare:
    printf("\n\n\nThank you for your time. Come back again for more calculations. Kwaheri.\n\n\n");
return 0;
}
