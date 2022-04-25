#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int array[], int size)
{
    for (int step = 0; step < size - 1; ++step)
    {
        for (int i = 0; i < size - step - 1; ++i)
        {
            if (array[i] > array[i + 1])
            {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }
}


int binarySearch(int tab[], int pivot, int min, int max)
{
    if (max >= min)
    {
        int mid = min + (max - min) / 2;

        if (tab[mid] == pivot)
            return mid;

        // przeszukujemy lewa strone tab
        if (tab[mid] > pivot)
            return binarySearch(tab, pivot, min, mid - 1);

        // przeszukujemy prawa strone tab
        return binarySearch(tab, pivot, mid + 1, max);
    }

    return -1;
}

int main()
{
    int pivot;
    int tab[] = {5,4,10,40,8,1,7,5,3,9};
    int n = sizeof(tab) / sizeof(tab[0]);
    bubbleSort(tab, n);

    for (int i = 0; i < n; ++i)
    {
        printf("%d  ", tab[i]);
    }
    printf("\n");


    printf("Jaki element chcesz znalezc: ");
    scanf("%d",&pivot);

    int wynik = binarySearch(tab, pivot, 0, n - 1);
    if (wynik == -1)
        printf("Nie znaleziono");
    else
        printf("Element znaleziono pod indeksem: %d", wynik);
}
