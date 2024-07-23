#include<stdio.h>
int main()
{
       int i,j;
    {
        for(i=1;i<=3;i++)
        {
            for(j=1;j<=7;j++)
            {
                if(j>=3+i&&j<=3+i)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    {
        for(i=4;i<=4;i++)
        {
            for(j=1;j<=7;j++)
            {
                if(j<=7)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    {
        for(i=5;i<=7;i++)
        {
            for(j=1;j<=7;j++)
            {
                if(j>=11-i&&j<=11-i)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }

         return 0;
}
