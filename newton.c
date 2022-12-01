 // solving equations implementation of Newton Raphson Method for

#include<stdio.h>
#include<math.h>
#include<conio.h>
#define EPSILON 0.001
#define func(x) 5*x*x*x + 7*x*x + 2*x+5




 
double derivFunc(double x)
{
 return 15*x*x+14*x+2;
}


void newtonRaphson(double x)
{
 double h = func(x) / derivFunc(x);
 while (fabs(h) >= EPSILON)
 {
  h = func(x)/derivFunc(x);

  // x(i+1) = x(i) - f(x) / f'(x)
  x = x - h;
 }
    printf("the value of the root is : %d\n",x);
 
}


int main()
{
    int t;
    scanf("%d",&t);
    while(t--){

    
 double x ;
 scanf("%lf",&x) ;// Initial values assumed
 newtonRaphson(x);

    }
 return 0;
}
