#include <stdio.h>
int main()
{
    long long int arr[100] = {1, 2, 3};
    int t, n, i;
    scanf("%d", &t);
    for (i = 3; i < 100; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 3];
    }
    while (t--)
    {
        scanf("%d", &n);
        printf("%llu\n", arr[n - 1]);
    }
    return 0;
}