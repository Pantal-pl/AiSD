#include <stdio.h>
int size = 0;
void change(int *x, int *y)
{
  int temp = *y;
  *y = *x;
  *x = temp;
}
void heapify(int tab[], int size, int i)
{
  if (size == 1)
  {
    printf("Wielkosc tablicy rowna sie 1\n");
  }
  else
  {
    int max = i;
    int leweDziecko = 2 * i + 1;
    int praweDziecko = 2 * i + 2;
    if (leweDziecko < size && tab[leweDziecko] > tab[max])
      max = leweDziecko;
    if (praweDziecko < size && tab[praweDziecko] > tab[max])
      max = praweDziecko;
    if (max != i)
    {
      change(&tab[i], &tab[max]);
      heapify(tab, size, max);
    }
  }
}
void insert(int tab[], int newValue)
{
  if (size == 0)
  {
    tab[0] = newValue;
    size += 1;
  }
  else
  {
    tab[size] = newValue;
    size += 1;
    for (int i = size / 2 - 1; i >= 0; i--)
    {
      heapify(tab, size, i);
    }
  }
}
void wypiszTablice(int tab[], int size)
{
  for (int i = 0; i < size; ++i)
    printf("%d ", tab[i]);
  printf("\n");
}
int main()
{
  int tab[10];

  insert(tab, 12);

  insert(tab, 13);

  insert(tab, 6);

  insert(tab, 9);

  insert(tab, 10);

  insert(tab, 7);

  insert(tab, 23);

  insert(tab, 17);

  insert(tab, 21);

  insert(tab, 14);

  wypiszTablice(tab, size);
}
