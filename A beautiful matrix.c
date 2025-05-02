#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,x,result;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
        {
            scanf("%d",&x);
            if(x==1)
            {
                result=abs(i-3)+abs(j-3);
                printf("%d\n",result);
            }
        }
    }
    return 0;
}
