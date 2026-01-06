#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* number of integers */
    int n;

    printf("How many integers would you like?: ");
    scanf("%d", &n);
    printf("\n");

    int *arr = malloc(n * sizeof(n));

    if (!arr)
    {
        printf("malloc failed\n");
        return 1;
    }

    for (int i = 0; i < n; ++i)
    {
        arr[i] = i * 11;
    }

    for (int i = 0; i < n; ++i)
    {
        printf("i-th arr: %d\n", i);
        printf("value at i-th arr: %d\n", arr[i]);
        printf("address of i-th arr: %p\n", (void *)&arr[i]);
        printf("\n");
    }
    return 0;
}