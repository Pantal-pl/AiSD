#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[10],i,szukany;

    printf("Wpisz elementy tablicy: ");
    for(i=0;i<10;++i)
        scanf("%d",&tab[i]); // wpisywanie elementow do tab

    printf("Wpisz element ktory chcesz znalezc");
    scanf("%d",&szukany);

    for(i=0;i<10;++i)
        if(tab[i]==szukany) //jezeli element tab bedzie  rowny elementowi szukanemu
            break;

    if(i<10) { // jezeli petla wyzej wykonala wiecej iteracji niz 10 to elementu nie znaleziono
            printf("Element znaleziony pod indeksem:  %d",i);
            printf(" .Adres znalezionego elementu:  %d",&tab[i]);
    }
    else
        printf("Nie znaleziono elementu" );

    return 0;
}

