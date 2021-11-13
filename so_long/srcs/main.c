#include "../includes/so_long.h"

void	ft_so_long(char *map)
{
	t_info	*info;

	info = ft_parsing(map);
	load_textures(info);
	ft_display(info);
	free_info(info);
}

int	main(int ac, char **av)
{
	if (ac == 2)
		ft_so_long(av[1]);
	else
		ft_putstr_fd("Error\nusage: ./so_long *.ber\n", 2);
	return (0);
}
