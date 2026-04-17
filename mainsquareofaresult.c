#include <stdio.h>
int main(){
     int n, i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Square series:\n");

    for(i = 1; i <= n; i++) {
        printf("%d ", i*i);
    }

    return 0;

}
