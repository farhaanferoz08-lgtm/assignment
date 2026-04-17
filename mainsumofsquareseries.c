#include<stdio.h>
int main (){
    int n, i;
    int sum = 0;
    printf("enter number of term:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum = sum + (i*i);
    }
    printf("sum of square series = %d",sum);
    return 0;
}