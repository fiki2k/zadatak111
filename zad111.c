// Program treba pomnozit 2 matrice i ispisat rezultat.

#include <stdio.h>
 
int main()
{
  int m, n, p, q, i, j, k, suma = 0;
  int prva[10][10], druga[10][10], konacna[10][10];
 
  printf("Unesi broj redaka i stupaca prve matrice\n");
  scanf("%d %d", &m, &n);
  printf("Unesi elemente 2 matrice\n");
 
  for (i = 0; i < m; i++)
    for (j = 0; j < n; j++)
      scanf("%d", &prva[i][j]);
 
  printf("Unesi broj redaka i stupaca druge matrice\n");
  scanf("%d %d", &p, &q);
 
  if (n != p)
    printf("Mnozenje nije moguce.\n");
  else
  {
    printf("Unesi elemente druge matrice\n");
 
    for (i = 0; i < p; i++)
      for (j = 0; j < q; j++)
        scanf("%d", &druga[i][j]);
 
    for (i = 0; i < m; i++) {
      for (j = 0; j < q; j++) {
        for (k = 0; k < p; k++) {
          suma = suma + prva[i][k]*druga[k][j];
        }
 
        konacna[i][j] = suma;
        suma = 0;
      }
    }
 
    printf("Produkt mnozenja je:\n");
 
    for (i = 0; i < m; i++) {
      for (j = 0; j < q; j++)
        printf("%d\t", konacna[i][j]);
 
      printf("\n");
    }
  }
 
  return 0;
}
