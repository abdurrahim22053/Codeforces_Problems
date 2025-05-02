
#include<stdio.h>
#include<math.h>
int main()
{
    int t,x1,x2,x3,x4,y1,y2,y3,y4;
    int area=1;
    scanf("%d",&t);
    while(t--)
    {

        scanf("%d%d%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
        if(x1==x3)
        {
            area=abs(y1-y3);
        }
        else area=abs(x1-x3);
        if(x2==x4)
        {
            area=abs(y2-y4);
        }
        else area=abs(x2-x4);

        printf("%d\n",area*area);

    }


    return 0;
}
