#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tablica[] = {1,2,5,8,2,5,5,1,6,1,5,7,4,1,4}; // nasza tablica
    bubbleSort(tablica); // wywolanie funkcji z nasza tablica
    for(int i = 0;i < 15 ;i++) {
        printf("%d",tablica[i]); // petla wypisujaca wszystkie posortowane elementy tablicy
    }
}
    void bubbleSort(int tab[]) { // deklaracja funkcji z argumentem
        for(int i=0; i<14;i++) { // 14 to rozmiar tablicy, nie 15 bo ostatni element jest juz posortowany
            for(int j=0;j<14-i;j++) {
                if(tab[j]>tab[j+1]) { // sprawdzanie czy pierwszy element jest wiekszy niz drugi
                    int temp = tab[j]; // przypisanie elementu tablicy do zmiennej temp
                    tab[j] = tab[j+1]; // zmiana wartosci elementu z nastepnym
                    tab[j+1] = temp; // zamiana kolejnego elementu tablicy na wartosc temp
                }
            }
        }
    }
