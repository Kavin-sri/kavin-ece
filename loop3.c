#include<stdio.h>
int main()
{
    int n,i,j;
    printf("enter the no. of rows ");
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {


            for(j=1;j<=2*i;++j)
            {
                if(j%2==0)
                {
                    printf("1");
                }
                else
                    printf("0");

            }




        printf("\n");
    }
    return 0;
}

