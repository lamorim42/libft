/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamorim <lamorim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 20:09:51 by lamorim           #+#    #+#             */
/*   Updated: 2021/08/15 21:52:10 by lamorim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*sub_s;

	i = 0;
	sub_s = (char *) malloc(len + 1);
	if (!sub_s)
		return (NULL);
	while (i < start)
	{
		s++;
		i++;
	}
	ft_memcpy(sub_s, s, len);
	sub_s[len] = '\0';
	return (sub_s);
}
