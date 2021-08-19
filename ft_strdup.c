/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamorim <lamorim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 19:00:45 by lamorim           #+#    #+#             */
/*   Updated: 2021/08/18 23:16:16 by lamorim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s_cpy;
	size_t	s_len;

	s_len = ft_strlen(s);
	s_cpy = (char *) malloc(s_len + 1);
	if (!s_cpy)
		return (NULL);
	ft_memcpy(s_cpy, s, s_len);
	s_cpy[s_len] = '\0';
	return (s_cpy);
}
