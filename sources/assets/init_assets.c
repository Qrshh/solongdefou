#include "so_long.h"

void    init_assets(t_map *map)
{
    int i;

    i = 0;
    map->array[0].texture = mlx_load_png("assets/player.png");

    while(i < 1)
    {
        map->array[i].image = mlx_texture_to_image(map->mlx, map->array[i].texture);
        mlx_delete_texture(map->array[i].texture);
        i++;
    }
}