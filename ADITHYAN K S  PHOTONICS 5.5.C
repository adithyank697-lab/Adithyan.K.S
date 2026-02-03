//ADITHYAN K S  PHOTONICS
#include<stdio.h>
void main()
{
    int n,i,m,p,c,t,totalmp;
    printf("enter the no of students");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("\n students %d",i);
        printf("\n enter the mark in maths");
        scanf("%d",&m);
        printf("\n enter the mark in physics");
        scanf("%d",&p);
        printf("\n enter the mark in chemistry");
        scanf("%d",&c);
        t=m+p+c;
        totalmp=m+p;
        if(m>=60&&p==50&&c>=40&&(t>=200||totalmp>=150))
        {
            printf("Eligible\n");
        }
        else
        {
            printf("not eligible\n");
        }
    }
}    