//ADITHYAN K S  PHOTONICS
#include<stdio.h>
void main()
{
    float a,b,c,d,m,n,x1,x2,de;
    printf("enter the values");
    scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&m,&n);
    de= (a*d)-(c*d);
    if (de==0)
    {
        printf("invalid denominator");
    }
    else
    {
        x1=((m*d)-(b*n))/de;
        x2=((n*a)-(m*c))/de;
        printf("x1=%f\tx2=%f",x1,x2);
    }
}    