#include "../includes/so_long.h"

void	check_wall(t_info *info, char *str)
{
	while (*str)
	{
		if (*str != '1')
		{
			ft_putstr_fd("Error\nThe map isn't closed\n", 2);
			free_info(info);
			exit(EXIT_FAILURE);
		}
		str++;
	}
}

void	check_componant(t_info *info, char *str, int line_index)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (str[i] == 'P')
		{
			info->player_pos[0] = i;
			info->player_pos[1] = line_index;
			info->player++;
		}
		if (str[i] == 'C')
			info->collectible++;
		if (str[i] == 'E')
			info->exit++;
	}
}
