#include "so_long.h"

void    image_select(t_map *map, int x, int y)
{
    if(map->matrix[x][y] != '\0')
    {
        if(map->matrix[x][y] == '0')
            display_perso(map, x, y);
    }
}

void    display_assets(t_map *map)
{
    int x;
    int y;
    int check_x;
    int check_y;

    check_x = -1;
    check_y = -1;
    x = 0;
    while(x < map->height)
    {
        y = 0;
        while(map->matrix[y][x])
        {
            image_select(map, x, y);
            if(map->matrix[x][y] == 'P')
            {
                check_x = x;
                check_y = y;
            }
            y++;
        }
        x++;
    }
    if(check_x != -1 && check_y != -1)
        display_hero(map, check_x, check_y);
}