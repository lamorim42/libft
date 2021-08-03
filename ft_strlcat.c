/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamorim <lamorim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 14:38:34 by lamorim           #+#    #+#             */
/*   Updated: 2021/08/03 11:53:27 by lamorim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*dst_cpy;
	char	*src_cpy;
	size_t	buf_size;
	size_t	dst_len;

	dst_cpy = dst;
	src_cpy = (char *)src;
	buf_size = size;
	while (buf_size-- != 0 && *dst_cpy != '\0')
		dst_cpy++;
	dst_len = dst_cpy - dst;
	buf_size = size - dst_len;
	if (buf_size == 0)
		return (dst_len + ft_strlen(src));
	while (*src_cpy != '\0')
	{
		if (buf_size != 1)
		{
			*dst_cpy++ = *src_cpy;
			buf_size--;
		}
		src_cpy++;
	}
	*dst_cpy = '\0';
	return (dst_len + (src_cpy - src));
}
