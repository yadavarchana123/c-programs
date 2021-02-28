#include <stdio.h>
int main()
{
    int t;
    long long int n, k;
    printf("enter the value of t ");
    scanf("%d", &t);
    while (t--)
    {
        printf("enter the value of n and k \n");
        scanf("%llu  %llu", &n, &k);
        if (k == 0)
            printf("%llu\n", n);
        else
            printf("%llu ", n % k);
    }
}