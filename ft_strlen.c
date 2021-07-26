#include "libft.h"

t_size_t	ft_strlen(const char *s)
{
	t_size_t	len;

	len = 0;
	while (*s)
	{
		len++;
		s++;
	}
	return (len);
}
