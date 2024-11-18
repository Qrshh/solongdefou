#include "so_long.h"

void    moove_update(t_all *all)
{
    ft_printf("Nombres de pas : %d\n", all->player.nb_moove++);
}

int check_move(t_map *map, int new_x, int new_y)
{
    new_x = new_x / TILE_SIZE;
    new_y = new_y / TILE_SIZE;
    if(new_x < 0 || new_y < 0 || new_x > map->width || new_y > map->height)
        return(0);
    else if (map->matrix[new_y][new_x] == '1')
        return (0);
    else if (map->matrix[new_y][new_x] == 'C')
    {
        ft_printf("Collected !");
        map->items_collected++;
        map->matrix[new_y][new_x] = '0';
    }
    else if (map->matrix[new_y][new_x] == 'E' && map->items_collected == map->info.collectibles)
        mlx_close_window(map->mlx);
    else if (map->matrix[new_y][new_x] == 'E' && map->items_collected < map->info.collectibles)
        return (0);
    return(1);
}
