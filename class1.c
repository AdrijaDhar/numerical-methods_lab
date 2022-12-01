//solving a quadratic equation and finding out its roots and its natures

#include <stdio.h>
#include <math.h>
#define i sqrt(-1)
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
    float a, b, c; // coefficients of the equation
    printf("Enter the coefficients :");
    scanf("%f %f %f", &a, &b, &c);
    float d;
    float root1, root2;
    d = (b * b - 4 * a * c);
    if (d > 0)
    {
        printf("The roots are real and distinct\n");
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        printf("%f %f\n", root1, root2);
    }
    else if (d == 0)
    {
        printf("The roots are real and equal\n");
        root1 = (-b / (2 * a));
        root2 = (-b / (2 * a));
        printf("%f %f\n", root1, root2);
    }
    else
    {
        if (b == 0)
        {
            printf("the roots are purely imaginary\n");
            root1 = (sqrt(-(d)))/ (2 * a);
            root2 = -(sqrt(-(d)))/ (2 * a);
            printf("i%f i%f\n", root1, root2);
        }
        else
        {
            printf("the roots are complex conjugates to each other\n");
            root1 = (-b + sqrt(-d))/(2 * a);
            root2 = (-b - sqrt(-d))/(2 * a);
            printf(" the real part of root1 is %f and imaginary part is i(%f)\n",(-b/(2*a)),sqrt(-d)/(2 * a));
            printf(" the real part of root2 is %f and imaginary part is i(%f)\n",(-b/(2*a)),-(sqrt(-d)/(2 * a)));

        }
    }
    }
    return 0;
}