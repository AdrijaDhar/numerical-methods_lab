#include<stdio.h>
#define EPSILON 0.01
 

// Bisection Method. 
double func(double x)
{
    return x*x*x -4*x*x+4*x;
}
 

void bisection(double a, double b)
{
    if (func(a) * func(b) > 0)
    {
        printf("You have not assumed right a and b\n");
        return;
    }
    
 printf("correct\n");
    double c = a;
    while ((b-a) >= EPSILON)
    {
        // Find middle point
        c = (a+b)/2;
 
        // Check if middle point is root
        if (func(c) == 0.0)
            break;
 
        // Decide the side to repeat the steps
        else if (func(c)*func(a) < 0)
            b = c;
        else
            a = c;

    }
          printf("%lf %lf %lf\n ",a,b,c);
    printf("The value of root is :%lf\n", c);
}
 

int main()
{
    long t;
    scanf("%d",&t);
    while(t--){
    double a , b ;
    scanf("%lf %lf",&a,&b);
    bisection(a, b);
    
    }
    return 0;
}