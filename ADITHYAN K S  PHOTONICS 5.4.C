//ADITHYAN K S  PHOTONICS
#include<stdio.h>
void main()
{
    int n,i,m;
    int a=0,b=0,c=0,d=0;
    printf("enter the no of students");
    scanf("%d",&n);
    printf("enter the mark");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&m);
        if(m>=80)
        {
            a++;
        }
        else if(m>=60)
        {
            b++;
        }
        else if(m>=40)
        {
            c++;
        }
        else
        {
            d++;
        }
    }    
    printf("81 to 100 is %d\n",a);
    printf("61 to 80 is %d\n",b);
    printf("41 to 60 is %d\n",c);
    printf("0 to 40 is %d\n",d);
    printf("more than 80 is %d\n",a);
    printf("more than 60 is %d\n",a+b);
    printf("more than 40 is %d\n",a+b+c);
    printf("40 or less is %d",d);
}    