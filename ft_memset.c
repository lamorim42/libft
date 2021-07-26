#include "libft.h"

void	*ft_memset(void *s, int c, t_size_t n)
{
	t_size_t	i;

	i = 0;
	while (i <= n)
	{
		s[i] = c;
		i++;
	}
}
