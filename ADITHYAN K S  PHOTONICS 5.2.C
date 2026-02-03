//ADITHYAN K S  PHOTONICS
#include<stdio.h>
void main()
{
    int n,count,sum;
    count=0;
    sum=0;
    for (n=101;n<=200;n++)
    {
        if(n%7==0)
        {
            count=count+1;
            sum=sum+n;
        }
    }
    printf("the num is between 100 and 200 and divisible by 7 is %d",count);
    printf("its sum is %d",sum);
}