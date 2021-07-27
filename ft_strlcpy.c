#include "libft.h"

size_t	ft_strlcpy(char *dst, char *src, size_t dstsize)
{
	size_t	src_size;
	size_t	dst_size;

	src_size = 0;
	dst_size = 0;
	while (*src)
		src_size++;
	if (dstsize != 0)
	{
		while (dst_size < dstsize && src[dst_size] != '\0')
		{
			dst[dst_size] = src[dst_size];
			dst_size++;
		}
	dst[dst_size] = '\0';
	}
	return (src_size);
}
