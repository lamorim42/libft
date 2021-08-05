/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamorim <lamorim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 19:14:20 by lamorim           #+#    #+#             */
/*   Updated: 2021/08/04 15:32:57 by lamorim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	big_index;
	size_t	lit_index;
	size_t	len_lit;
	char	*big_cpy;

	big_index = 0;
	lit_index = 0;
	len_lit = ft_strlen(little);
	big_cpy = (char *) big;
	if (len_lit == 0)
		return (big_cpy);
	while (big_cpy[big_index] != '\0' && len-- >= len_lit)
	{
		if (big_cpy[big_index] == little[lit_index]
			&& !ft_strncmp(big_cpy + big_index, little, len_lit))
			return (big_cpy + big_index);
		big_index++;
	}
	return (0);
}
