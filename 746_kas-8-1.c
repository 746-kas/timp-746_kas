#include <stdio.h>
#include <stdlib.h>
// Функция быстрой сортировки
void quickSort(int *n, int left, int right)
{
  int p;
  int l_hold = left; //левая граница
  int r_hold = right; // правая граница
  p = n[left];
  while (left < right) // пока границы не сомкнутся
  {
    while ((n[right] >= p) && (left < right))
      right--;
    if (left != right)
    {
      n[left] = n[right];
      left++;
    }
    while ((n[left] <= p) && (left < right))
      left++;
    if (left != right) // если границы не сомкнулись
    {
      n[right] = n[left]; // перемещаем элемент [left] на место [right]
      right--; // сдвигаем правую границу вправо
    }
  }
  n[left] = p;
  p = left;
  left = l_hold;
  right = r_hold;
  if (left < p) // Рекурсивно вызываем сортировку для левой и правой части массива
    quickSort(n, left, p - 1);
  if (right > p)
    quickSort(n, p + 1, right);
}
int main()
{
  int n,i;
  int *a;
    scanf("%d", &n);
    a  =  (int *)calloc(n, sizeof(int));
    for (i = 0;i< n;i++)
    {
        scanf("%d", &a[i]);
    }
  quickSort(a,0,n); // вызов функции сортировки
  // Вывод элементов массива после сортировки
  for (int i = 0; i<n; i++)
    printf("%d ", a[i]);
  printf("\n");
  return 0;
}

