#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Libère une grille bidimensionnelle précédemment allouée par alloc_g
 * @grid: Le pointeur vers la grille.
 * @height: Le nombre de lignes dans la grille.
 */
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
