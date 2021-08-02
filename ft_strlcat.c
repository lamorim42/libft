/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamorim <lamorim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 14:38:34 by lamorim           #+#    #+#             */
/*   Updated: 2021/08/02 20:00:46 by lamorim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;

	dst_len = ft_strlen(dst);
	if (ft_strlen(dst) && ft_strlen(src))
	{
		i = 0;
		while (src[i] != '\0' && i < size - dst_len - 1)
		{
			dst[dst_len + i] = src[i];
			i++;
		}
		dst[size + i] = '\0';
		return (ft_strlen(dst));
	}
	return (ft_strlen(dst) + ft_strlen(src));
}
