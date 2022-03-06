#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pesel[] = {1,2,5,1,7,9,7,0,1,6,8}; // nasza tablica
    selectionSort(pesel); // wywolanie funkcji z nasza tablica
    for(int i = 0;i < 11 ;i++) {
        printf("%d",pesel[i]); // petla wypisujaca wszystkie elementy tablicy
    }
}
    void selectionSort(int tab[]) { // deklaracja funkcji z argumentem
        for(int i = 0;i<10;i++) { // 10 to rozmiar tablicy, nie 11 bo ostatni element jest juz posortowany
            int minimum = i;
            for(int i2 = i+1; i2<11;i2++) { //11 bo tablica ma 11 elementow
                if(tab[minimum] > tab[i2]) {// jezeli pierwszy element jest wiekszy od kolejnego to przypisz index tego elementu do minimum
                    minimum = i2;
                }
            }
                int temp = tab[i];// wpisz pierwsz element do tymczasowe
                tab[i] = tab[minimum]; // zapisz najmniejszy element na pierwsza pozycje
                tab[minimum] = temp; // zapisz poprzedni element na pozycje najmniejszego
        }

    }
