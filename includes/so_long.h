#ifndef SO_LONG_H
# define SO_LONG_H

# include "Libft/libft.h"
# include "MLX42/include/MLX42/MLX42.h"
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_assets
{
	mlx_texture_t	*texture;
	mlx_image_t		*image;
}					t_assets;

typedef struct s_info
{
}					t_info;

typedef struct s_player
{
}					t_player;

typedef struct s_map
{
	int				fd;
	char			**matrix;
	int				height;
	int				width;

	t_assets		array[0];
	mlx_t			*mlx;
}					t_map;

typedef struct s_all
{
	t_map			map;
	t_player		player;
}					t_all;

// MAIN
void				init_var(t_all *all);

// UTILS
void				exit_error(char *msg, char **tab);
void				handler_error(int ac, char **av);
void				free_map(char **tab);

// MAP
void				init_map(t_map *map);
void				init_assets(t_map *map);

#endif
