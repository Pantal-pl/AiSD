
#include<stdio.h>
#include<stdbool.h>

#define INF 9999999

// definiujemy liczbe wierzcholkow grafu, w naszym przyadku 11 (A-K)
#define V 11

// create a 2d array of size 5x5
//tworzenie tablicy dwuwymiarowej o wymiarach 11x11

int G[V][V] = {
    {0,0,1,4,5,5,0,0,22,0,0},
    {0,0,16,0,0,0,0,0,3,30,0},
    {1,16,0,1,0,0,0,0,0,0,0},
    {4,0,1,0,1,0,0,0,0,0,0,},
    {5,0,0,1,0,12,0,0,0,0,0},
    {5,0,0,0,12,0,27,0,0,0,0},
    {0,0,0,0,0,27,0,5,0,10,3},
    {0,0,0,0,0,0,0,5,0,5,20,0},
    {22,3,0,0,0,0,0,5,0,25,0},
    {0,30,0,0,0,0,0,20,25,0,3},
    {0,0,0,0,0,0,18,0,0,3,0}};

int main() {
  int liczbaKrawedzi;  // liczba krawedzi

  // tworzymy tablice do sledzenia wybrancych wierzcholkow
  int wybrane[V];

  // wypelniamy kolejne bajty w pamieci ustalona wartoscia w tym przypadku false
  memset(wybrane, false, sizeof(wybrane));

  // ustawiamy liczba krawedzi na 0
  liczbaKrawedzi = 0;


  // liczba krawedzi w MDR będzie zawsze mniejsza niż (V -1), gdzie V jest liczbą wierzchołków w grafie


  // wybieramy pierwszy wierzcholek i ustawiamy jego wartosc na true
  wybrane[0] = true;

  int x;  //  liczba rzedow
  int y;  //  liczba krawedzi


  printf("Krawedz : Waga\n");

  while (liczbaKrawedzi < V - 1) {

    //Dla każdego wierzchołka w zbiorze znajdujemy wszystkie wierzchołki sąsiednie
    //Obliczamy odległość od wierzchołka wybranego w kroku pierwszym.
    //jeśli wierzchołek jest już w zbiorze , odrzuć go w przeciwnym razie
    //wybieramy inny wierzchołek najbliższy wierzchołkowi wybranemu w kroku 1.

    int min = INF;
    x = 0;
    y = 0;

    for (int i = 0; i < V; i++) {
      if (wybrane[i]) {
        for (int j = 0; j < V; j++) {
          if (!wybrane[j] && G[i][j]) {  //jezeli nie jest wybrany ale istnieje krawedz
            if (min > G[i][j]) {
              min = G[i][j];
              x = i;
              y = j;
            }
          }
        }
      }
    }
    //wypisanie
    printf("%d - %d : %d\n", x, y, G[x][y]);
    wybrane[y] = true;
    liczbaKrawedzi++;
  }

  return 0;
}
