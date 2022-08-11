// 4. Write a function to rotate an array by n position in d direction. The d is an indicative value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )
#include <stdio.h>
#define RIGHT 1
#define LEFT 0
void input(int[], int);
void rotate(int a[], int, int, int);
void display(int[], int);
int i;
int main()
{
    int a[20], n, ROT;
    printf("enter a number of array = ");
    scanf("%d", &n);
    input(a, n);
    printf("enter the number of rotation = ");
    scanf("%d", &ROT);
    rotate(a, n, RIGHT, ROT);
    display(a, n);
}
void input(int a[], int n)
{
    printf("enter %d numbers of array - \n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
}
void rotate(int a[], int n, int dir, int Shift_Count)
{
    int temp, i;
    if (dir == RIGHT)
    {

        while (Shift_Count)
        {
            temp = a[n - 1];
            for (i = n - 1; i > 0; i--)
            {
                a[i] = a[i - 1];
            }
            a[0] = temp;
            Shift_Count--;
        }
    }
    else
    {
        while (Shift_Count)
        {
            temp = a[0];
            for (i = 0; i <= n - 2; i++)
            {
                a[i] = a[i + 1];
            }
            a[n - 1] = temp;
            Shift_Count--;
        }
    }
}
void display(int a[], int n)
{
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
}
