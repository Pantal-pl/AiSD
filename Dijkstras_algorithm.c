// Dijkstra's Algorithm in C

#include <stdio.h>
#define INFINITY 9999
#define MAX 10


void Dijkstra(int Graph[MAX][MAX], int n, int start)
{

    //inicjacja zmiennych
    int cost[MAX][MAX], distance[MAX], pred[MAX];
    int visited[MAX], count, mindistance, nextnode, i, j;

    //stworzenie tablic wag
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
    // w przypadku gdy wartosci komórki tablicy bêdzie równa 0 to ustawiamy jej wage na INFINITY
            if (Graph[i][j] == 0)
                cost[i][j] = INFINITY;
    // w przypadku braku spe³nienia warunku ustawiamy jej wage zgodnie z wagami krawedzi
            else
                cost[i][j] = Graph[i][j];
    // iterujemy raz jeszcze przez wierzcholki i ustawiamy wage od startowego jako dystans
    for (i = 0; i < n; i++)
    {
        distance[i] = cost[start][i];
        pred[i] = start;
        visited[i] = 0;
    }

    distance[start] = 0;
    visited[start] = 1;
    count = 1;

// jezeli okaze sie ze mamy do sprawdzenia jeszcze jakies wierzcholki
    while (count < n - 1)
    {
        //minimalny dystans ustawiamy na INFINITY
        mindistance = INFINITY;

// jeszcze raz przechodzimy po wierzcholkach
        for (i = 0; i < n; i++)

            //w przypadku gdy aktualny dystans jest mnijeszy niz poprzedni i wierzcholek nie zostal jeszcze dowiedzony
            if (distance[i] < mindistance && !visited[i])
            {

                //to nadpisujemy wartosci nowa mniejsza
                mindistance = distance[i];
                nextnode = i;
            }

        visited[nextnode] = 1;

           // iterujemy po wez³ach których wierzcho³ki nie zosta³y odwiedzone
        for (i = 0; i < n; i++)
            if (!visited[i])

                // jezeli akt aktualny najmniejszy dystans jest wiekszy ni¿ minimalny dystans plus waga kolejnego wezla
                if (mindistance + cost[nextnode][i] < distance[i])
                {
                    // zmieniamy wartosc na mniejsza
                    distance[i] = mindistance + cost[nextnode][i];
                    pred[i] = nextnode;
                }
        count++;
    }

    //wypisujemy odleglosci

    for (i = 0; i < n; i++)

        if (i != start)
        {
            printf("\nDistance from source to %d: %d", i, distance[i]);
        }

}
int main()
{
    int Graph[MAX][MAX], i, j, n, u;
    n = 5;
// wczytujemy macierz sasiedztwa
    Graph[0][0] = 0;
    Graph[0][1] = 3;
    Graph[0][2] = 7;
    Graph[0][3] = 1;
    Graph[0][4] = 2;

    Graph[1][0] = 3;
    Graph[1][1] = 0;
    Graph[1][2] = 5;
    Graph[1][3] = 2;
    Graph[1][4] = 2;

    Graph[2][0] = 7;
    Graph[2][1] = 5;
    Graph[2][2] = 0;
    Graph[2][3] = 6;
    Graph[2][4] = 5;

    Graph[3][0] = 1;
    Graph[3][1] = 2;
    Graph[3][2] = 6;
    Graph[3][3] = 0;
    Graph[3][4] = 1;

    Graph[4][0] = 2;
    Graph[4][1] = 2;
    Graph[4][2] = 5;
    Graph[4][3] = 1;
    Graph[4][4] = 2;

    // ustawienie Ÿród³a jako wierzcho³ek numer 0
    u = 0;
    Dijkstra(Graph, n, u);

    return 0;
}
