int isEven(int num)
{
    // (num & 1) is 1, !(1)= 0 >> odd, else even
    return (!(num & 1));
}

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);

    isEven(num)? printf ("Even"):printf ("Odd");
    return 0;
}
