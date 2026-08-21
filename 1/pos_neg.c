include <stdio.h>

int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
        
    if (a==0){ 
        printf("The number is zero");
    }
    else{
        (a>0)? printf("positive") : printf("Negative");
    }
}
