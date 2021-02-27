#include <stdio.h>
int main()
{
    int a, n, i, new = 0, r, original;
    printf("enter the no. ");
    scanf("%d", &a);
    original = a;
    printf("enter the no. of digits ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        r = a % 10;
        a = a / 10;
        new = new * 10 + r;
    }
    if (new == original)
        printf("no. is palindrome");
    else
        printf("not a palindrome");
}