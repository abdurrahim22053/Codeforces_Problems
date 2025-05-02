#include<stdio.h>
int main (){
    int n;
    int sum=0;
    printf("Enter a number:\n");
    scanf("%d",&n);
   while(n!=0){
    int r=n%10;
    sum=sum*10+r;
    n=n/10;
   }
   printf("Reverse number=%d\n",sum);
    
    return 0;
}