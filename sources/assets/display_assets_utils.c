#include "so_long.h"

void display_perso(t_map *map)
{
    int image_x;
    int image_y;
    mlx_image_t *img;
    // mlx_image_t *img2; SERVIRA A AFFICHER LE SOL SOUS LE PERSO

    img = map->array[0].image;
    //img2 = map->array[indice du sol].image
    image_x = x * TILE_SIZE;
    image_y = y * TILE_SIZE;
    
}