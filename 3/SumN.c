#include <stdio.h> 

int main(){
    int n, sum=0;
    printf("N : ");
    scanf("%d", &n);
  
    for(int i=1; i<=n; i++) {
        sum += i;
    }
    // OR sum=n*(n+1)/2;

    printf("%d", sum);
    return 0;
}
