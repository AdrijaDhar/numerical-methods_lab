#include<stdio.h>


#define func(x) 5*x*x*x - 7*x*x + 2*x-5
#define df1(x)  15*x*x-14*x+2

int main(){
    float h,df,x,x1;
    printf("the value of x is :");
    scanf("%f",&x);
    printf("the value of h is :");
    scanf("%f",&h);
    int n;
    printf("the number of iterations :");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        x1=x+h;
    df=(func(x+h)-func(x))/h;
    printf("%d %f %f %f %f\n",i,func(x),func(x1),df,df1(x));
    h=h/2.00000;
    
    }
    return 0;
}