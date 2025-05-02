#include<stdio.h>
int main (){
    int n;
    int f=0;
    printf("Enter a number:\n");
    scanf("%d",&n);
    for( int i=2;i<=n/2;i++){
        if (n%i==0){
            f++;
            break;
        }
    }
    if(f==0)
   printf("Prime\n");
   else printf("Not Prime\n");
    
    return 0;
}