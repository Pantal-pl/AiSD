#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tablica[] = {1,5,2,22,5,4,15,1,4,14,2,8,4,2,6}; // nasza tablica
    insertionSort(tablica); // wywolanie funkcji z nasza tablica
    for(int i = 0;i < 15 ;i++) {
        printf("%3d",tablica[i]); // petla wypisujaca wszystkie elementy tablicy
    }
}
    void insertionSort(int tab[]) { // deklaracja funkcji z argumentem
        for(int i = 1; i < 15;i++) { // inkrementacja przez wszystkie elementy talibcy z pominieciem pierwszego
            int temp = tab[i]; // zapisywanie drugiego elementu do zmiennej temp
            int j = i - 1; // inicjacja zmiennnej ktora jest mnijesza o 1 od zmiennej i
            while(j>=0 && tab[j] > temp) { //sparwdzanie czy elementy po lewej stronie sa wieksze od temp
                tab[j+1] = tab[j]; // przypisanie kolejnego elementu tablicy do poprzedniego
                j--; // dekrementacja zmiennej j
                tab[j+1] = temp; // przesuniecie w prawo
            }
        }
    }
