// 5. Write a function to find the first occurrence of adjacent duplicate values in the array. Function has to return the value of the element
#include <stdio.h>
void input(int[], int);
int duplicate(int[], int);
int i;
int main()
{
    int a[20], n;
    printf("enter the size of array = ");
    scanf("%d", &n);
    input(a, n);
    printf("First occurrence of adjacent duplicate values in the array is = %d", duplicate(a, n));
    return 0;
}
void input(int a[], int n)
{
    printf("enter the value of %d arrays - \n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
}
int duplicate(int a[], int n)
{
    int j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                return a[i];
            }
        }
    }
    if (n - 1 == i)
        return 0;
}