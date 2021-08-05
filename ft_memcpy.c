/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamorim <lamorim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 16:48:32 by lamorim           #+#    #+#             */
/*   Updated: 2021/08/04 17:14:00 by lamorim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*dest_cpy;
	const char	*src_cpy;

	dest_cpy = (char *) dest;
	src_cpy = (char *) src;
	while (n--)
		*dest_cpy++ = *src_cpy++;
	return (dest);
}
