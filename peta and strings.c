
#include<stdio.h>
#include<string.h>
int main()
{
    char s1[101],s2[101],result=0;
    scanf("%s %s",s1,s2);
    for(int i=0; i<strlen(s1); i++)
    {
        char ch1=tolower(s1[i]);
        char ch2=tolower(s2[i]);
        if(ch1<ch2)
        {
            result=-1;

            break;
        }
        else if(ch1>ch2)
        {
            result=1;

            break;
        }
    }
    printf("%d\n",result);



    return 0;
}
