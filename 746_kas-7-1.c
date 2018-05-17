#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int findstep(int step)
{
    step = (int)(step  / 1.247);
    if (step < 1)
        step = 1;
    return step;
}
void sort(int a[], int Size)
{
    int step = Size;
    int temp, i;
    for (;;)
    {
        step = findstep(step);
        int swapped = 0;
        for (i = 0; i < Size - step; i++) 
        {
            int j = i + step;
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
                swapped  =  1;
            }
        }
        if (step  ==  1 && !swapped)
            break;
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
    sort(a, n);
    for(i = 0;i < n;i++)
    {
        printf("%d ", (a[i]));
    }
    return 0;
}
