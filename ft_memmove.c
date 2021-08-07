/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamorim <lamorim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 13:36:23 by lamorim           #+#    #+#             */
/*   Updated: 2021/08/06 14:07:27 by lamorim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//void	*ft_memmove(void *dest, const void *src, size_t n)
//{
//	char	*tempoarray;
//	size_t	i;
//
//	tempoarray = (char *) src;
//	i = 0;
//	while (tempoarray[i] && ((char *) dest)[i] && i < n)
//	{
//		((char *) dest)[i] = tempoarray[i];
//		i++;
//	}
//	return (dest);
//}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;
	char	*last_d;
	char	*last_s;

	d = (char *) dest;
	s = (char *) src;
	if (d < s)
	{
		while (n--)
			*d++ = *s++;
	}
	else
	{
		last_s = s + (n - 1);
		last_d = d + (n - 1);
		while (n--)
			*last_d++ = *last_s++;
	}
	return (dest);
}
