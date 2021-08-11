/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamorim <lamorim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 13:36:23 by lamorim           #+#    #+#             */
/*   Updated: 2021/08/10 16:52:51 by lamorim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*dest_cpy;
	const char	*src_cpy;
	size_t		i;

	dest_cpy = (char *) dest;
	src_cpy = (char *) src;
	i = n;
	if (dest_cpy < src_cpy)
	{
		while (n--)
			*dest_cpy++ = *src_cpy++;
		return (dest);
	}
	else
	{
		while (i--)
			dest_cpy[i] = src_cpy[i];
		return (dest);
	}
}
