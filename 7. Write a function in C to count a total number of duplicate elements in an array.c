// 7. Write a function in C to count a total number of duplicate elements in an array
#include <stdio.h>
void input(int[], int);
int duplicate(int[], int);
int duplicate(int a[], int n)
{
    int i, j, d = 0;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                d++;
                break;
            }
        }
    }
    return d;
}
void input(int a[], int n)
{
    int i;
    printf("enter %d numbers - \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}
int main()
{
    int a[20], n;
    printf("enter size of array = ");
    scanf("%d", &n);
    input(a, n);
    printf("All duplicate  Elements in this array is = %d", duplicate(a, n));
    return 0;
}