/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamorim <lamorim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 14:38:34 by lamorim           #+#    #+#             */
/*   Updated: 2021/08/12 17:11:36 by lamorim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*dst_cpy;
	char	*src_cpy;
	size_t	src_len;
	size_t	dst_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	src_cpy = (char *) src;
	dst_cpy = dst;
	if (size <= dst_len)
		return (size + src_len);
	else
	{
		dst_cpy += dst_len;
		while (*src_cpy && --size > dst_len)
			*dst_cpy++ = *src_cpy++;
		*dst_cpy = '\0';
	}
	return (dst_len + src_len);
}
