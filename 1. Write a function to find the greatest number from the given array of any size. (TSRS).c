// 1. Write a function to find the greatest number from the given array of any size.(TSRS)
#include <stdio.h>
int fun(int[], int);
int main()
{
    int a[20], b;
    printf("enter size of array = ");
    scanf("%d", &b);
    printf("Greatest number is = %d", fun(a, b));
    return 0;
}
int fun(int b[], int n)
{
    int i;
    printf("enter %d numbers\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
        if (b[0] < b[i])
        {
            b[0] = b[i];
        }
    }
    return b[0];
}