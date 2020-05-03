#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define NUM 11
int main()
{
    int i;
    double r,a,b,l=0,m=0,n=0,o=0,t=0;
    float points[NUM][2]=
                    {
                       {34.22,102.43},
                       {39.87,100.93},
                       {41.85,97.43},
                       {43.23,97.81},
                       {40.06,98.32},
                       {53.29,98.32},
                       {53.29,100.07},
                       {54.14,97.08},
                       {49.12,91.59},
                       {40.71,94.85},
                       {55.15,94.65}
                    };
    for(i=0;i<NUM;i++)
    {
        a=pow(points[i][0],2);
        o=o+a;
        b=pow(points[i][1],2);
        t=t+b;
    }
    for(i=0;i<NUM;i++)
    {
        l=l+(points[i][0]*points[i][1]);
        m=m+points[i][0];
        n=n+points[i][1];
    }
    /*summation(xy)=l, summation(x)=m, summation(y)=n, summation(x^2)=o, summation(y^2)=t */
   /* printf("l= %lf\t",l);
    printf("m= %lf\t",m);
    printf("n= %lf\t",n);
    printf("o= %lf\t",o);
    printf("t= %lf\n",t); */
     r=((l)-(m*n))/sqrt((((NUM*o)-(pow(m,2)))*((NUM*t)-(pow(n,2)))));
    printf("The value of correlation coefficient r = %.3lf\n ",r);
    return 0;
}
