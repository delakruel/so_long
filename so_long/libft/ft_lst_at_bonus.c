#include "libft.h"

t_list	*ft_lst_at(t_list **begin_list, unsigned int nbr)
{
	unsigned int	i;
	t_list			*ptr;

	if (!begin_list)
		return (NULL);
	ptr = *begin_list;
	i = 0;
	while (ptr && i < nbr)
	{
		i++;
		ptr = ptr->next;
	}
	if (i < nbr && !ptr)
		return (NULL);
	return (ptr);
}
