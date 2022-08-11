// 9. Write a function in C to merge two arrays of the same size sorted in descending order
#include <stdio.h>
void input1(int[], int);
void input2(int[], int);
int merz(int[], int[], int[], int, int);
void sorted(int[], int);
int i;
int main()
{
    int n1, n2, a[20], b[20], c[40], n3, n, x;
    printf("enter the size of 1'st Array = ");
    scanf("%d", &n1);
    input1(a, n1);
    printf("enter the size of 2'nd Array = ");
    scanf("%d", &n2);
    n3 = n1 + n2;
    input2(b, n2);
    merz(a, b, c, n2, n3);
    sorted(c, n3);
    return 0;
}
void input1(int a[], int n1)
{
    printf("enter %d numbers for 1'st Array\n", n1);
    for (i = 0; i < n1; i++)
        scanf("%d", &a[i]);
}
void input2(int b[], int n2)
{
    printf("enter %d numbers for 2'st Array\n", n2);
    for (i = 0; i < n2; i++)
        scanf("%d", &b[i]);
}
int merz(int a[], int b[], int c[], int n2, int n3)
{
    int j, l;
    int k = 0;
    {
        for (i = 0; i < n3; i++)
            if (i > n2 - 1)
            {
                c[i] = a[k];
                k++;
            }
            else
                c[i] = b[i];
    }
    return c[i];
}
void sorted(int c[], int n3)
{
    int j, l;
    printf("After merging two arrays of the same size sorted in descending order is - \n");
    for (i = 1; i < n3; i++)
    {
        for (j = 0; j < n3 - i; j++)
        {
            if (c[j] < c[j + 1])
            {
                l = c[j];
                c[j] = c[j + 1];
                c[j + 1] = l;
            }
        }
    }
    for (j = 0; j < n3; j++)
        printf("%d ", c[j]);
}