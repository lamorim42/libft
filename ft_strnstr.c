/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamorim <lamorim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 19:14:20 by lamorim           #+#    #+#             */
/*   Updated: 2021/08/03 20:47:37 by lamorim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*big_cpy;
	char	*lit_cpy;
	size_t	lit_len;

	big_cpy = (char *) big;
	lit_cpy = (char *) little;
	if (!ft_strlen(lit_cpy))
		return (big_cpy);
	while (*big_cpy != '\0')
	{
		if (*big_cpy == *lit_cpy)
		{
			lit_len = len;
			while (*big_cpy == *lit_cpy && lit_len--)
			{
				big_cpy++;
				lit_cpy++;
			}
			if (*lit_cpy == '\0' && len > 0)
				return (big_cpy - len);
		}
		big_cpy++;
		lit_cpy = lit_cpy - len;
	}
	return (0);
}

