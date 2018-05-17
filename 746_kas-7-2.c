#include <stdio.h>
#include <stdlib.h>

void shellsort(int a[], int n)
{
    int i, j, k, p;
    for (i = n / 2; i > 0; i = i / 2)
    {
        for (j = i; j < n; j++)
        {
            for(k = j - i; k >= 0; k = k - i)
            {
                if (a[k+i] >= a[k])
                    break;
                else
                {
                    p = a[k];
                    a[k] = a[k+i];
                    a[k+i] = p;
                }
            }
        }
    }
}

int main ()
{
    int n, i;
    int *a;
    scanf("%d", &n);
    a  =  (int *)calloc(n, sizeof(int));
    for (i = 0;i< n;i++)
    {
        scanf("%d", &a[i]);
    }
    shellsort(a, n);
    for(i = 0;i < n;i++)
    {
        printf("%d ", (a[i]));
    }
    return 0;
}
