#include "so_long.h"

int	main(int ac, char **av)
{
	t_all all;

	handler_error(ac, av);
	init_var(&all);
	all.map.fd = open(av[1], O_RDONLY);
	if (all.map.fd < 0)
		exit_error("Fichier inexistant", NULL);
	init_map(&all.map);
	all.map.mlx = mlx_init((all.map.height * 32), (all.map.height * 32), "so_long", true);
	init_assets(&all.map);
	display_assets(&all->map);
}

void init_var(t_all *all)
{
	all->map.fd = 0;
	all->map.matrix = NULL;
	all->map.height = 0;
	all->map.width = 0;
}
