#include<stdio.h>
int main (){
    int n;
    printf("Enter array size:");
    scanf("%d",&n);
    int ar[n];
    printf("Enter array elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    int max=ar[0];
    for(int i=0;i<n;i++){
        if(ar[i]>max)
        max=ar[i];
    }
    printf("MAx=%d",max);
    return 0;
}