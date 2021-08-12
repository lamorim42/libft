/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamorim <lamorim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 19:00:45 by lamorim           #+#    #+#             */
/*   Updated: 2021/08/12 08:43:48 by lamorim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s_cpy;
	size_t	s_len;
	int		i;

	s_len = ft_strlen(s);
	s_cpy = (char *) malloc(s_len);
	i = 0;
	ft_memcpy(s_cpy, s, s_len);
	return (s_cpy);
}
