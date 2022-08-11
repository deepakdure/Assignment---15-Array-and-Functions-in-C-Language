// 6. Write a function in C to read n number of values in an array and display it in reverse order.
#include <stdio.h>
void input(int[], int);
void reverse(int[], int);
void display(int[], int);
int i;
int main()
{
    int a[20], n;
    printf("enter the numbers of array = ");
    scanf("%d", &n);
    input(a, n);
    reverse(a, n);
    display(a, n);
    return 0;
}
void input(int b[], int m)
{
    printf("enter %d numbers of array\n", m);
    for (i = 0; i < m; i++)
        scanf("%d", &b[i]);
}
void reverse(int b[], int m)
{
    int x;
    for (i = 0; i < m / 2; i++)
    {
        x = b[m - 1 - i];
        b[m - 1 - i] = b[i];
        b[i] = x;
    }
}
void display(int b[], int m)
{
    printf("After reverse arry is = ");
    for (i = 0; i < m; i++)
        printf("%d ", b[i]);
}