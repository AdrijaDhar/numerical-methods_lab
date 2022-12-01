#include <stdio.h>
#include <math.h>

float f(float);
float derivative(float);

int main()
{
    float x;                 // x: approximation
    unsigned short i = 0, n; // n: number of iterations

    printf("FIRST APPROXIMATION: "); 
    scanf("%f", &x);

    printf("ITERATIONS: ");
    scanf("%hu", &n);
    float x1, h, val;
    scanf("%f", &h);
    while (i <= n)
    {
        x1 = x - f(x) / derivative(x);
        i++;
        val=(x-x1)/x;
        if(val<=h){
            break;
        }else{

            printf("%d %f %f APPROXIMATE ROOT: %f \n", i, x, f(x), x1);
            x = x1;
        }
    }
    printf("final root is %f\n", x1);
    return 0;
}

float f(float x)
{ // f(x)
    return 5 * pow(x, 3) - 7 * pow(x, 2) + 2 * x - 5;
}

float derivative(float x)
{
    // f'(x)
    return 15 * pow(x, 2) - 14 * x + 2;
}
