#include "libft.h"

t_size	ft_strlen(const char *s)
{
	t_size	len;

	len = 0;
	while (*s)
	{
		len++;
		s++;
	}
	return (len);
}
