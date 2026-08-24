#include <stdio.h>

int main(){
    int a, b;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    
    int sum = (b*(b+1)/2) - (a*(a+1)/2) + a;
    
    printf("%d",sum);
    return 0;
}
