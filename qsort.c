#include <stdio.h>
#include <stdlib.h>

/* comparison function */
int compare(const void *a, const void *b)
{
    int x = *(int *)a;
    int y = *(int *)b;

    return x - y;   // ascending order
}

int main()
{
    int arr[] = {5, 2, 9, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    qsort(arr, n, sizeof(int), compare);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
