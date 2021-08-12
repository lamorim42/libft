/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamorim <lamorim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 20:09:51 by lamorim           #+#    #+#             */
/*   Updated: 2021/08/12 08:37:02 by lamorim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*sub_s;

	i = 0;
	sub_s = (char *) malloc(len);
	if (!sub_s)
		return (NULL);
	while (i < start)
	{
		s++;
		i++;
	}
	ft_memcpy(sub_s, s, len);
	return (sub_s);
}
