// 8. Write a function in C to print all unique elements in an array
#include <stdio.h>
void input(int[], int, int[]);
void unique(int[], int, int[]);
int main()
{
    int n, a[20], arr[20];
    printf("enter the size of array = ");
    scanf("%d", &n);
    input(a, n, arr);
    unique(a, n, arr);
    return 0;
}
void input(int a[], int n, int arr[])
{
    int i;
    printf("enter %d numbers - \n");
    for (i = 0; i <= n - 1; i++)
    {
        scanf("%d", &a[i]);
        arr[i] = 1;
    }
}
void unique(int a[], int n, int arr[])
{
    int i, j;
    printf("All unique elements in this array is = ");
    for (i = 0; i <= n - 1; i++)
    {
        if (arr[i] == 0)
        {
            continue;
        }
        for (j = i + 1; j <= n - 1; j++)
        {
            if (a[i] == a[j])
            {
                arr[i] = arr[j] = 0;
            }
        }
        if (arr[i] == 1)
        {
            printf(" %d ", a[i]);
        }
    }
}